#include <bits/stdc++.h>
#include "lru_cache.h"
#include "hash_table.h"
using namespace std;
LRU_cache::LRU_cache(int c){
    cap=c;
    size=c;
    head=new node(0,0);
    tail=new node(0,0);
    head->next=tail;
    tail->prev=head;
}

void LRU_cache::insert_at_front(node* nd){
    node* temp;
    // if(head->next==NULL){
    //     head->next=nd;
    //     nd->prev=head;
    //     tail->prev=nd;
    //     nd->next=tail;
    // }
    temp=head->next;
    head->next=nd;
    nd->prev=head;
    temp->prev=nd;
    nd->next=temp;
}

void LRU_cache::delete_from_end(){
    node* temp;
    temp=tail->prev;
    tail->prev=temp->prev;
    temp->prev->next=tail;
    delete(temp);
}

void LRU_cache::move_front(node* nd){

    node* temp;
    temp=nd->prev;
    temp->next=nd->next;
    nd->next->prev=temp;
    // nd->next=NULL;
    // nd->prev=NULL;
    // delete(nd);
    insert_at_front(nd);
}

void LRU_cache::put(int k,int v){

    node* newnode =new node(k,v);
    
        if(ht.find(k)!=NULL){
            node* temp=ht.find(k);
            temp->val=v;
            move_front(ht.find(k));
            return ;
        }
        ht.insert(k,newnode);
        if(size==0){
            ht.remove(tail->prev->key);
            delete_from_end();
            insert_at_front(newnode);
        }
        else{
            insert_at_front(newnode);
            size--;
        }

}
int LRU_cache::get(int k){

    node*  temp=ht.find(k);
    if(temp!=NULL){
        move_front(temp);
        return temp->val;
    }
    return -1;
}

// for checking 
void LRU_cache::display(){
    node* temp = head->next;

    cout << "LRU State: ";

    while(temp != tail){
        cout << "[" << temp->key << ":" << temp->val << "] ";
        temp = temp->next;
    }

    cout << endl;
}
void LRU_cache::print_hash_table(){
    ht.print();
}
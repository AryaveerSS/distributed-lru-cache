#include <bits/stdc++.h>
#include "lru_node.h"
#include "hash_table.h"

    hnode::hnode(int k,node* nd){
        nod=nd;
        key=k;
        next=nullptr;
    }

    hashtable::hashtable(){
        for(int i=0;i<size;i++){
            table[i]=NULL;
        }
    }

void hashtable::insert(int key,node* lrunode){
        int hashkey=key%10;
        hnode* newnode=new hnode(key,lrunode);
        if(table[hashkey]==NULL){
            table[hashkey]=newnode;
            return ;
        }
        hnode* temp=table[hashkey];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
node* hashtable::find(int keyy){
        int hashkey=keyy%10;
        hnode* temp=table[hashkey];
        while(temp!=NULL){
            if(temp->nod->key==keyy){
                return temp->nod;
            }
            temp=temp->next;
        }
        return NULL;
    }
void hashtable::remove(int key){
    int hashkey = key % size;

    hnode* temp = table[hashkey];
    hnode* prev = nullptr;

    while(temp != nullptr){
        if(temp->key == key){

            // Case 1: first node in bucket
            if(prev == nullptr){
                table[hashkey] = temp->next;
            }
            else{
                prev->next = temp->next;
            }

            delete temp;
            return;
        }

        prev = temp;
        temp = temp->next;
    }
}
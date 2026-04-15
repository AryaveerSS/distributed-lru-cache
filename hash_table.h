#ifndef HASH_TABLE_H
#define HASH_TABLE_H
#include "lru_node.h"
#include <bits/stdc++.h>
class hnode{
public:
    node* nod;
    int key;
    hnode* next;
    hnode(int k, node* nd);
};
class hashtable{
private:
    static const int size=10;
    hnode* table[size];
public:
    hashtable();
    void insert(int k,node* nd);
    void remove(int k);
    node* find(int k);
    void print();
};
#endif
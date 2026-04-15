#ifndef LRU_CACHE_H
#define LRU_CACHE_H

#include <bits/stdc++.h>
#include "lru_node.h"
#include "hash_table.h"
class LRU_cache{
private:
    int cap;
    int size;
    node* head;
    node* tail;
    hashtable ht;

    void insert_at_front(node* nd);
    void delete_from_end();
    void move_front(node* nd);
public:
    LRU_cache(int capacity);
    int get(int key);
    void put(int key,int value);
    void display();
    void print_hash_table();
};


#endif
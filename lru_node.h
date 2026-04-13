#ifndef LRU_NODE_H
#define LRU_NODE_H

class node{
public:
    int val;
    int key;
    node* next;
    node* prev;
    node(int k,int v);
};

#endif
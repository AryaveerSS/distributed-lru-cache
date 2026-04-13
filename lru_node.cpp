#include "lru_node.h"
#include <bits/stdc++.h>

node::node(int k,int v){
    key=k;
    val=v;
    next=NULL;
    prev=NULL;
}
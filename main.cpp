#include <bits/stdc++.h>
#include "lru_cache.h"
using namespace std;

int main(){

    LRU_cache cache(2);

    cache.put(1,10);
    cache.display();

    cache.put(2,20);
    cache.display();

    cache.put(3,30);
    cache.display();

    cout<<cache.get(2)<<endl;
    cache.display();

    cache.put(4,40);
    cache.display();

    cache.put(3,25);
    cache.display();
    cache.put(5,50);
    cache.put(6,60);
    cache.print_hash_table();
    // cache.put(1,10);
    // cache.put(2,20);
    // cache.get(1);        
    // cache.put(3,30);     
    // cache.display();
    return 0;
}
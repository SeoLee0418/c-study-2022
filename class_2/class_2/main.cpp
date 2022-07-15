#include "Header.h"

int main(){
    
    Goblin* g = new Goblin("Goblin");
    g -> printinfo();
    
    Slime* s = new Slime("Slime");
    s -> printinfo();
    
    Orc* o = new Orc("Orc");
    o -> printinfo();
    
    Skullarcher* k = new Skullarcher("Skullarcher");
    k -> printinfo();
    
    return 0;
}

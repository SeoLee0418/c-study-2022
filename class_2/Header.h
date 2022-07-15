#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstdlib>
#include <ctime>

class Enemy {
public:
    int hp;
    int atk;
    int range;
    int move;
    
    Enemy(int hp, int atk, int range, int move){
        this -> hp = hp;
        this -> atk = atk;
        this -> range = range;
        this -> move = move;
    }
    
    void printinfo(){
        printf("hp : %d\n", hp);
        printf("atk : %d\n", atk);
        printf("range : %d\n", range);
        printf("move_speed : %d\n", move);
    }
  
};

class Goblin : public Enemy {
public:
    char name[20];
    
    Goblin(const char* name) : Enemy(60, 5, 10, 10){
        strcpy(this -> name, name);
        printf("Name : %s\n", name);
    }
};

class Slime : public Enemy {
public:
    char name[20];
    
    Slime(const char* name) : Enemy(100, 3, 5, 4){
        strcpy(this -> name, name);
        printf("Name : %s\n", name);
    }
};

class Orc : public Enemy {
public:
    char name[20];
    
    Orc(const char* name) : Enemy(80, 10, 12, 8){
        strcpy(this -> name, name);
        printf("Name : %s\n", name);
    }
};

class Skullarcher : public Enemy {
public:
    char name[20];
    
    Skullarcher(const char* name) : Enemy(60, 20, 50, 3){
        strcpy(this -> name, name);
        printf("Name : %s\n", name);
    }
};

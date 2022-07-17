#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <ctime>

class Weapon {
public:
    int atk;
    int range;
    int price;
    
};

class Short : public Weapon{
public:
    char name[20];
    Short(const char* name, int atk, int range, int price){
        strcpy(this -> name, name);
        this -> atk = atk;
        this -> range = range;
        this -> price = price;
        printf("Name : %s\n", name);
        printf("Atk : %d\n", atk);
        printf("Range : %d\n", range);
        printf("Price : %d\n", price);
    }
    
};

class Long : public Weapon{
public:
    char name[20];
    Long(const char* name, int atk, int range, int price){
        strcpy(this -> name, name);
        this -> atk = atk;
        this -> range = range;
        this -> price = price;
        printf("Name : %s\n", name);
        printf("Atk : %d\n", atk);
        printf("Range : %d\n", range);
        printf("Price : %d\n", price);
    }
    
};

class Ham : public Weapon{
public:
    char name[20];
    Ham(const char* name, int atk, int range, int price){
        strcpy(this -> name, name);
        this -> atk = atk;
        this -> range = range;
        this -> price = price;
        printf("Name : %s\n", name);
        printf("Atk : %d\n", atk);
        printf("Range : %d\n", range);
        printf("Price : %d\n", price);
    }
    
};

int input();

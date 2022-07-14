#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>

int count_num = 1;
class Employee {
    public :
    int em_number;
    char name[20];
    int gender; // 1 = man, girl = 2;
    char rank[20];
    
    Employee(char* name, int g, char* r){
        this -> em_number = count_num;
        count_num++;
        strcpy(this -> name, name);
        gender = g;
        strcpy(rank, r);
    }
    void print(){
        printf("No : %d\n", em_number);
        printf("Name : %s\n", name);
        printf("Gender : %s\n", gender == 1 ? "Man" : "Lady");
        printf("Rank : %s\n", rank);
    }
};

int getnumber(const char* prompt);
char* getstring(const char* prompt);

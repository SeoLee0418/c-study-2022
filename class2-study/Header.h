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
    char* name;
    int gender; // 1 = man, girl = 2;
    char* rank;
    
    Employee(char* name, int g, char* r){
        this -> em_number = count_num;
        count_num++;
        this -> name = new char[strlen(name) + 1];
        gender = g;
        rank = new char[strlen(r) + 1];
    }
    
    ~Employee(){
        delete [] name;
        delete [] rank;
        
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

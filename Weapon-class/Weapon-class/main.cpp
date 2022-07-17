#include "Header.h"

int main(){
    
    Weapon* w[10];
    int get = input();
    srand(time(0));
    
    for (int i = 0; i < get; i++) {
        switch (rand() % 3) {
            case 0:
                w[i] = new Short("Short sword", 10, 5, 500);
                break;
            case 1:
                w[i] = new Long("Long Sword", 20, 10, 2000);
                break;
            case 2:
                w[i] = new Ham("Hammer", 30, 7, 3000);
                break;
        }
    }
    
    return 0;
}

int input(){
    int input;
    printf("Make Weapon : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}

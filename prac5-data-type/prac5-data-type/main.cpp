#include "Header.h"

int main(){
    
    float a = gf();
    float b = gf();
    char c = gc();
    float r;
    bool f = true;
    
    if (c == 'p') {
        r = pow(a, b);
    }
    
    else if (c == 'x'){
        f = false;
    }
    
    else if (c == 'r'){
        srand(time(0));
        switch (rand( ) % 5) {
            case 0:
                r = a + b;
                break;
            case 1:
                r = a - b;
                break;
            case 2:
                r = a * b;
                break;
            case 3:
                r = a / b;
                break;
            case 4:
                r = (int)a % (int)b;
                break;
    }
    }
    
    if (f) {
        printf("value : %0.2f\n", r);
    }
    else{
        printf("program is over\n");
    }
    
    return 0;
}

float gf(){
    float input;
    printf("press number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%f", &input);
    
    return input;
}

char gc(){
    char input;
    printf("press number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%c", &input);
    
    return input;
}

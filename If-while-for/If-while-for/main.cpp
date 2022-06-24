#include <cstdio>

/*논리 연산자
 && : and 연산
 || : or 연산
 a == b
 a != b
 a > b
 a < b
 a >= b
 a <= b
 참 = true
 거짓 = false
 */
int getfunc(){
    int input;
    
    printf("press the number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}

int main(){
    int a = 3;
    int b = 4;
    int c = 5;
    int d = 6;
    
    /* while 반복문
     while (a < b) {
        printf("hello world");
    }*/
    
    // if 반복문
    int input = getfunc();
    
    if (input <= 0) {
        printf("Wrong number\n");
    }
    else{
    for (int i = 0; i < input; i++) {
        printf("A");
    }
    }
    printf("\n");
    input = getfunc();
    
    if (input <= 0) {
        printf("Wrong number\n");
    }
    else{
    for (int i = 0; i < input; i++) {
        printf("B");
    }
        printf("\n");
    }
    
    /* 조건문
    if (a == b && c == d) {
        printf("a and b is equal");
    }
    else if (a > b || a < d){
        printf("a is bigger than b");
    }
    else if (a < b && c < d){
        printf("hi");
    }
    else{
        printf("a is lower than b");
    }
    */
    
    return 0;
}

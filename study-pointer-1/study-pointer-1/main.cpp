#include "Header.h"

int main(){
    
    /*
     //포인터 선언 예제
     int a = 100;
     int* b;
     b = &a;
     *b = 200;
     printf("%d", a);
     */
    
    /*
     //예제
     int a = getint();
     int b = getint();
     
     int* c = &a;
     int* d = &b;
     
     int result;
     int* r = &result;
     
     *r = *c + *d;
     printf("value : %d\n", *r);
     */
    
    // 연습
    int v1;
    int v2;
    int r;
    
    int* pv1 = &v1;
    int* pv2 = &v2;
    int* pr = &r;
    
    *pv1 = getint();
    *pv2 = getint();
    srand(time(0));
    
    switch (rand() & 6) {
        case 0:
            *pr = *pv1 + *pv2;
            break;
        case 1:
            *pr = *pv1 - *pv2;
            break;
        case 2:
            *pr = *pv1 * *pv2;
            break;
        case 3:
            *pr = *pv1 / *pv2;
            break;
        case 4:
            *pr = *pv1 % *pv2;
            break;
        case 5:
            *pr =pow(*pv1, *pv2);
            break;
    }
    printf("v1 = %d, v2 = %d, value is %d\n",v1, v2,  r);
    
    return 0;
}

int getint(){
    int input;
    printf("press number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}

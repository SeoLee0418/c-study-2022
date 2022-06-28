#include "Header.h"

int main(){
    
    //데이터타입
    /*bool mb = false; //1바이트, 참거짓
    char mc = 10; //1바이트, 문자, 문자열 저장
    int mi = 200; //4바이트 정수연산
    float pi = 3.14; //4바이트, 소수점수 저장
    double md = 3.1415; //8바이트, 소수점수 저장, 2배정밀도*/
    
    //자료형이 많은 이유는 저장공간이 한정되어 있기 때문
    //문자를 표현하는데 2~3바이트정도면 가능한데 더 잡아먹을수가 있음
    
    //data_type 특징
    /*char c = 97;
    printf("%c\n", c); //아스키 코드에 의거하여 출력
    c = 'a';
    printf("%c\n",c);
    int a = 98;
    printf("%c\n", a);
    char b;
    
    scanf("%c", &b);
    printf("%c\n", b);
    
    int my_integer = 100;
    printf("%05d\n", my_integer);
    
    float f = 3.43;
    printf("%05.1f\n", f);*/
    
    float a = get();
    float b = get();
    char c = gc();
    
    float result;
    bool t = true;
    
    switch (c) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        case '%':
            result = (int)a % (int)b;
            break;
        default:
            t = false;
            break;
    }
    
    if (t) {
        printf("value : %.3f\n", result);
    }
    else{
        printf("wrong\n");
    }
    
    
    return 0;
}

float get(){
    
    float input;
    printf("press the number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%f", &input);
    
    return input;
}

char gc(){
    char input;
    printf("press the number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%c", &input);
    
    return input;

}

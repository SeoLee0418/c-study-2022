#include "Header.h"

struct marine{
    int hp;
    int mp;
    int atk;
    char name[20];
};

marine* foo(){
    marine* m = (marine*)malloc(sizeof(marine));
    m -> hp = 40;
    m -> mp = 10;
    m -> atk = 100;
    strcpy(m->name, "Seoyong");
    return m;
}

int main(){
    
    /*
     //배열변수
     int ma[100];
     int* pma = ma;
     
     ma[0] = 100;
     ma[1] = 200;
     ma[2] = 300;
     
     printf("%d\n",pma[0]);
     printf("%d\n",pma[1]);
     printf("%d\n",pma[2]);
     */
    
    /*
     //문자열 포인터
     const char* ms ="hello world";
     
     printf("%s", ms);
     */
    
    /*
     //메모리 동적할당 예제
     marine* m = foo();
     printf("%s\n", m->name);
     free(m);
     */
    
    //연습
    int *ma;
    int input;
    printf("press number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    ma = (int*)malloc(sizeof(int) * input);
    
    for (int i = 0; i < input; i++) {
        ma[i] = i * 2 + 2;
    }
    
    for (int i = 0; i < input; i++) {
        printf("ma[%d] = %d\n", i, ma[i]);
    }
    free(ma);
    
    return 0;
}

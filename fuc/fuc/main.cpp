#include <cstdio>

int getfunc(){
    int input;
    
    printf("press number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input); //Windows는 scanf_s
    
    return input;
}

int sum(int a, int b){
    
    return a+b;
}

int main(){
    
    int input = getfunc();
    int input2 = getfunc();
    int input3 = sum(3, 4);
    
    printf("%d,\n", input);
    printf("%d,\n", input2);
    printf("%d,\n", input3);

    // 사칙 연산 : + - * / + %(나머지)
    int value1 = 5 + 1;
    int value2 = 5 - 1;
    int value3 = 5 * 1;
    int value4 = 5 / 1;
    int value5 = 5 % 1;
    
    printf("%d,\n%d,\n%d,\n%d,\n%d\n", value1, value2, value3, value4, value5);
    
    //단항 연산자 : ++ --
    int valueadd = 10;
    int valuesub = 10;
    
    valueadd++;
    valuesub--;
    
    printf("%d,\n%d\n", valueadd, valuesub);
    
    return 0;
}

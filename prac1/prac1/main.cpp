#include <cstdio>

int sum(int a, int b){
    return a+b;
    
}

int pow(){
    int input;
    printf("Press Number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    input = input * input;
    
    return input;
}

int main(){
    
    int value1 = -512;
    int value2 = sum(3, 4);
    int value3 = pow();
    
    printf("value1 is %d\n",value1);
    printf("value 2 is %d\n", value2);
    printf("value3 is %d\n", value3);
    
    
    return 0;
}

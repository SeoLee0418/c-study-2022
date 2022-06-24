#include <cstdio>

int getnum(){
    int input;
    printf("Press the number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}

int getoper(){
    int input;
    printf("Press operation number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);

    return input;
}
int sum(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int pow(int a, int b){
    int value = 1;
    
    for (int i = 0; i < b; i++) {
        value = value * a;
    }
    return value;
}

int main(){
    int value1 = getnum();
    int value2 = getnum();
    int oper = getoper();
    int result;
    if (oper == 0) {
        result = sum(value1, value2);
    }
    else if (oper == 1){
        result = sub(value1, value2);
    }
    else if (oper == 2){
        result = pow(value1, value2);
    }
    else{
        printf("You pressed wrong number");
    }
    
    printf("Answer : %d\n", result);
    return 0;
}

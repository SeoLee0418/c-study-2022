#include <cstdio>

int main(){
    
    // break; continue
    /*for(;;){
        printf("Press the number : ");
        int input;
        fseek(stdin, 0, SEEK_END);
        scanf("%d", &input);
        
        if (input == 0) {
            continue;
        }
        else if (input == 1){
            break;
        }
        printf("Last Looping");
    }
    
    printf("Program is over\n");
    */
    
    //중첩 반복문
    int input;
    printf("Press the number : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
   /*1
    for (int i = 0; i < input; i++) {
        for (int k = 0; k < input; k++) {
            printf("*");
        }
        printf("\n");
    }*/
    
    /*2
     for (int i = 0; i < input; i++) {
        for (int k = 0; k < i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }*/
    
    /*3
    for (int i = 0; i < input; i++) {
       for (int k = 0; k < input - i; k++) {
           printf("*");
       }
       printf("\n");
    }*/
    
    return 0;
}

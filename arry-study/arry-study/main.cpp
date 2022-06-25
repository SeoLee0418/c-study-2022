#include <cstdio>

int main(){
    /*array(배열)
    int a[10];
    a[0] = 1;
    a[1] = 2;
    printf("%d", a[0];
    */
    
    /*int ma[5] = {1, 2, 3, 4, 5};
    
    printf("%d", ma[2]);
    
    for (int i = 0; i < 5; i++) {
        printf("ma[%d] = %d\n", i, ma[i]);
    }*/
    
    /*int ma[3][3] = {
        {2, 3, 4},
        {4, 2, 3},
        {3, 2, 5}
    };
    
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            ma[i][k] = i*k;
            
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int k = 0; k < 3; k++) {
            printf("%d", ma[i][k]);
        }
        printf("\n");
    }*/
    
    /*크기가 20인 배열을 만들고 짝수 배열을 만들기
     int ma[20];
     
     for (int i = 0; i < 20; i++) {
             ma[i] = 2 * i + 2;
         printf("ma[%d] = %d\n",i, ma[i]);
     }
     */
    
    /*크기가 20인 피보나치 수열 배열 만들기
    int fibo[20];
    fibo[0] = 1;
    fibo[1] = 1;
    
    for (int i = 2; i < 20; i++) {
        fibo[i] = fibo[i-2] + fibo[i-1];
    }
    
    for (int i = 0; i < 20; i++) {
        printf("fibo[%d] = %d\n", i, fibo[i]);
    }*/
    
    
    int ma[10][10];
    int a = 1;
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {
            ma[i][k] = a;
            a++;
        }
    }
    
    for (int i = 0; i < 10; i++) {
        for (int k = 0; k < 10; k++) {
            printf("%d ", ma[i][k]);
        }
        printf("\n");
    }

    return 0;
}

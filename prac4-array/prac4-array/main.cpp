#include <cstdio>

int main(){
    
    int ma[5][5];
    int ma1[5][5];
    int ma2[5][5];
    
    int a = 1;
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            ma[i][k] = a;
            a++;
        }
    }
    
    a = 1;
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            ma1[i][k] = 2 * a;
            a++;
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            ma2[i][k] = ma[i][k] + ma1[i][k];
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int k = 0; k < 5; k++) {
            printf("%d ", ma2[i][k]);
        }
        printf("\n");
    }
    
    return 0;
}

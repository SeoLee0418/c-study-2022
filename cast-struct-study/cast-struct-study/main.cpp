#include <cstdio>

// structure
/*marine
 hp : 10
 atk : 10
 def : 5
 */

struct Marine{
    int hp;
    int atk;
    int def;
};

int main(){

    //실수 자료형
    /*float a = 3.14;
    float input;
    printf("a = %f",a);
    scanf("%f", &input);*/
    
    /*Type-cating
    int a = 10;
    int b = 4;
    float r = (float)a/(float)b;
    
    printf("%f",r);*/
    
    Marine m;
    m.atk = 10;
    m.atk = 10;
    m.def = 5;
    
    Marine m2;
    m2.atk = 10;
    
    Marine m3[10];
    m3[0].hp = 40;
    
    printf("%d", m3[0].hp);
    
    return 0;
}

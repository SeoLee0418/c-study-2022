#include <cstdio>

int main(){
    
    int name = 2;
    name = 200;
    
    int nAme = 3;
    nAme = 300;
    //변수 값 변경 가능, C/C++은 위에서부터 출력. 가장 마지막 값을 출력함
    
    int cherry;
    int c0mputer;
    int myworld1;
    
    // 사칙연산 + - * / 가능
    
    int result = name + nAme;
    int result2 = (name + nAme) *2;
    
    printf("Hello world\n");
    printf("Danke!\n");
    printf("안녕하세요!\n");
    printf("%d\n", name);
    printf("%d\n", nAme);
    printf("reuslt1 = %d, result2 = %d\n", result, result2);
    
    /*이것은 두줄 주석
     이렇게 두줄로 주석 작성이 가능하다*/
    
    return 0;
}

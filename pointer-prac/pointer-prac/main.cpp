#include "Header.h"

struct Marine{
    int hp = 50;
    int mp = 10;
};

int main(){
    
    /*
     //초기화
     int* pointer = nullptr;
     
     pointer = (int*)malloc(sizeof(int));
     *pointer = 10;
     printf("%d", pointer);
     
     free(pointer);
     pointer = nullptr; //습관. 포인터 주소 초괴화
     */
    
    /*
    //배열 초기화
    int ma[10] = {0,};
    int* ma[10] = {nullptr,};
    */
    
    /*
    //구조체 초기화
    marine* m = nullptr;
    m = (marine*)malloc(sizeof(marine));
    
    Marine* marine[40] = { nullptr, };
    marine[0] = (Marine*)malloc(sizeof(Marine));
    */
    
    //포인터의 포인터
    Marine** marine;
    marine = (Marine**)malloc(sizeof(Marine*) * 20);
    return 0;
}

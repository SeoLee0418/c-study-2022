#include "Header.h"

int main(){
    
    Matrix x = Matrix(100, 200, 300);
    Matrix result = x + 10;
    
    result.printinfo();
    
    return 0;
}

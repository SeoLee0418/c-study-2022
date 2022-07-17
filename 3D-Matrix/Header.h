#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <cstdlib>

class Matrix {
public:
    float x;
    float y;
    float z;
    
    Matrix(){
        x = 0;
        y = 0;
        z = 0;
    }
    
    Matrix(float x, float y, float z){
        this -> x = x;
        this -> y = y;
        this -> z = z;
    }
    
    void printinfo(){
        printf("%.3f, %.3f, %.3f", x, y, z);
    }
};

Matrix operator+(Matrix& m1, float s){
    return Matrix(m1.x + s, m1.y + s, m1.z + s);
}

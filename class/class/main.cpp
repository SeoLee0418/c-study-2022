#include "Header.h"

struct ZergUnit{
    int hpRegen = 10;
    bool burrow = 0;
    
};

struct zergling : public ZergUnit{
    int hp; //체력
    int mp; //마력
    int atk; //공격력
    int def; //방어력
    int range; //사정거리
    float movespeed; //속도
    bool spd_up = 0; //발업
    bool atkspd_up = 0; //아드레날린 업글
    int size; //소형
    int sight; //시야
    
    void MoveTo();
    void AtkTo();
    
    
};

int main(){
    
    zergling z;
    z.hpRegen;
    z.hp;
    z.burrow = 1;
    
    return 0;
}

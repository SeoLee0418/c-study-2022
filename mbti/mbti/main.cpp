#include "Header.h"


int main(){
    
    int I_E = 0;
    int S_N = 0;
    int T_F = 0;
    int J_P = 0;
    
    printf("I_E 검증입니다\n");
    foo(&I_E, "나는 처음 보는 사람아게 자신을 소개하는것이 두렵지 않다");
    foo(&I_E, "내가 스트레를 푸는 방법은 사람들을 만나는것이다");
    foo(&I_E, "데화를 시작하기보다 맞장구 치는걸 좋아한다");
    foo(&I_E, "술자리에서 노는것보다 집에서 게임하는게 좋다");

    printf("S_N 검증입니다\n");
    foo(&S_N, "업무를 하거나 과제를 할때 계획을 먼저 세운다");
    foo(&S_N, "가끔 번뜩이는 아이디어가 생각나 메모를 하곤 한다");
    foo(&S_N, "가끔 비현실적인 망상을 하는 편이다");
    foo(&S_N, "나는 내성적인 성격이다");
    
    printf("T_F 검증입니다\n");
    foo(&T_F, "싱대방의 고민을 들어줄 때 원인을 찾기보다 공감을 해주는 편 이다");
    foo(&T_F, "어떤 이유에서건 상대방의 기분을 먼저 생각해야 한다");
    foo(&T_F, "다른 사람들이 나를 어떻게 생각하는지 지나치게 생각한다");
    foo(&T_F, "영화나 드라마가 뮤지컬이나 예술작품보다 더 많은 영감을 준다");
    
    printf("J_P 검증입니다\n");
    foo(&J_P, "방 정리가 되어 있지 않으면 일을 시작할수가 없다");
    foo(&J_P, "과제나 업무는 최대한 미루었다가 한꺼번에 하는 편 이다");
    foo(&J_P, "호기심은 나를 움직이는 원동력이다");
    foo(&J_P, "프리랜서가 회사원보다 더 나은 삶을 살고 있다고 생각한다");
    
    goo(&I_E, &S_N, & T_F, &J_P);
    
    return 0;
}

void foo(int* target, const char* string){
    
    for (; ;){
        int input;
        printf("%s\n", string);
        printf("1. 강한부정 2. 악한부정 3. 약한 긍정 4. 강한 긍정\n: ");
        fseek(stdin, 0, SEEK_END);
        scanf("%d", &input);
        
        if (input == 1) {
            *target = *target - 3;
            break;
        }
        
        else if (input == 2){
            *target = *target - 1;
            break;
        }
        
        else if (input == 3) {
            *target = *target + 1;
            break;
        }
        
        else if (input == 4) {
            *target = *target + 3;
            break;
        }
        else{
            printf("Wrong number\n");
            continue;
        }
        
    }
}

void goo(int* a, int* b, int* c, int* d){
    char mbti[4];
    
    if (*a < 0) {
        mbti[0] = 'E';
    }
    else{
        mbti[0] = 'i';
    }
    
    if (*b < 0) {
        mbti[1] = 'S';
    }
    else{
        mbti[1] = 'N';
    }
    
    if (*c < 0) {
        mbti[2] = 'T';
    }
    else{
        mbti[2] = 'F';
    }
    
    if (*d < 0) {
        mbti[3] = 'J';
    }
    else{
        mbti[3] = 'P';
    }
    
    mbti[4] = '\0';
    printf("당신의 mbti는 %s입니다\n", mbti);
}

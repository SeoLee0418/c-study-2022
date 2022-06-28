#include "Header.h"

int main(){
    char mstring[100];
    
    // null 문자는 \0을 활용하여 지정 가능
    
    //문자열 함수
    
    /*
    strcpy(mstring, "Hello word"); //문자열 복사
    printf("%s\n", mstring);*/
    
    /*
    //scanf
    scanf("%99[^\n]s", mstring);
    printf("%s\n", mstring);
    */
    
    /*
    //strcpy
    printf("press string : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", mstring);
    
    char duplistring[100];
    strcpy(duplistring, mstring);
    
    printf("%s\n", duplistring);
    */
    
    /*
    //strcmp
    char a[100];
    char b[100];
    
    strcpy(a, "Hello b");
    strcpy(b, "Hello a");
    
    int result = strcmp(a, b);
    printf("%d\n", result);
    */
    
    /*
    //prac1
    char a[100];
    char b[100];
    
    printf("press word : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", a);
    
    printf("press word : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", b);
    
    if(strcmp(a, b) == 0){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
    */
    
    /*
    //prac2
    char a[100];
    char b[100];
    
    printf("press word : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", a);
    
    printf("press word : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", b);

    bool s = true;
    for (int i = 0;;i++) {
        if (a[i] == '\0') break;
        if (a[i] != b[i]) s = false;
    }
    
    if (s) {
        printf("they are same\n");
    }
    else{
        printf("they are different\n");
    }
    */
    
    //prac3
    char a[100];
    
    printf("press word : ");
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", a);
    
    int index = 0;
    for (int i = 0;; i++) {
        if(a[i] == '\0'){
            index = i;
            break;
        }
    }
    
    for (int i = index-1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");
    
    return 0;
}

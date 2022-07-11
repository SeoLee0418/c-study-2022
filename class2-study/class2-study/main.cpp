#include "Header.h"

int main(){
    
    Employee* employee[100];
    int count = 0;
    
    while (true) {
        int input;
        printf("Press your command : 1.view 2.add 3.sub 4.close : ");
        fseek(stdin, 0, SEEK_END);
        scanf("%d", &input);
        
        if (input == 1) {
            for (int i = 0; i < count; i++) {
                employee[i] -> print();
            }
        }
        else if (input == 2){
            char* name = getstring("Press the name : ");
            int gender = getnumber("Press the gender 1. Man 2. Lady : ");
            char* rank = getstring("Press the rank : ");
            
            Employee* e = new Employee(name, gender, rank);
            delete[] name;
            delete[] rank;
            employee[count] = e;
            count++;
        }
        else if (input == 3){
            int number = getnumber("Press the number : ");
            int deletedindex = -1;
            for (int i = 0; i < count; i++) {
                if (number == employee[i]->em_number) {
                    delete employee[i];
                    deletedindex = i;
                    break;
                }
            }
            if (deletedindex <= 0) {
                for (int i = deletedindex; i < count; i++) {
                    employee[i] = employee[i+1];
                }
            }
            count--;
        }
        else if (input == 4){
            printf("close this program");
            break;
        }
        else{
            printf("Wrong number\n");
        }
    }
    
    
    return 0;
}

int getnumber(const char* prompt){
    int input;
    printf("%s", prompt);
    fseek(stdin, 0, SEEK_END);
    scanf("%d", &input);
    
    return input;
}
char* getstring(const char* prompt){
    char* input = new char[100];
    printf("%s", prompt);
    fseek(stdin, 0, SEEK_END);
    scanf("%99[^\n]s", input);
    
    return input;
}

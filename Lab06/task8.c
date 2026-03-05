#include <stdio.h>
int main(){
    int pin;
    while(1){
        printf("Enter PIN: ");
        scanf("%d",&pin);
        if(pin==5555){
            printf("Access Granted\n");
            break;
        }
        printf("Incorrect PIN\n");
    }
    return 0;
}

#include<stdio.h>
#include <ctype.h>
#include<string.h>
int main(){

    char name[30];
    printf("Enter Name: ");
    scanf("%s", name);
    int x = strlen(name);
    if(x>=3 && x<= 20){
        if(name[0] != '\0' && name[x-1] != '\0'){
            int valid = 1;
            for(int i=0;i<x;i++){
                if(isdigit(name[i])){
                    valid = 0;
                }
            }
            if(valid == 1){
                printf("Valid Name!");
            }else {
                printf("Invalid Name!");
            }
        }
    }
return 0;
}

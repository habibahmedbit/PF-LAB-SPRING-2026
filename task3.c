#include <stdio.h>

int main() {
    int num = 0;

    printf("Enter the attendance of the class: ");
    scanf("%d", &num); 

    if (num > 0 ) {  
        printf("Positive\n");
    } 
    else if (num < 0 ) {
        printf("Negative\n");
    } 
    else{  
        printf("Zero\n");
    }

    return 0;
}
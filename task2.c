#include <stdio.h>

int main() {
    int units = 0;
    printf("Enter the Units used: ");
    scanf("%d", &units); 
    if (units >= 100 && units <= 300) {  
        printf("Medium Usage\n");
    } 
    else if (units > 300) {
        printf("High Usage\n");
    } 
    else {  
        printf("Low Usage\n");
    }
    return 0;
}
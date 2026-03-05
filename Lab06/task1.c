#include <stdio.h>

int main() {
    int checkInCount = 0;
    int status;
    
    printf("Gym Check-In System - 25 Members\n\n");
    
    for (int i = 1; i <= 25; i++) {
        printf("Member (1/0): ");
        scanf("%d", &status);
        
        if (status == 1) {
            checkInCount++;
        }
    }
    
    printf("\nTotal Checked In: %d\n", checkInCount);
    printf("Total Absent: %d\n", 25 - checkInCount);
    
    return 0;
}

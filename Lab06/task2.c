#include <stdio.h>
int main() {
    double bal = 1000.0;
    double usage;
    printf("Mobile Data Usage Tracker\n");
    printf("Initial Balance: MB\n\n", bal);
    
    while (bal > 0) {
        printf("Available Balance: MB\n", bal);
        printf("Enter data usage (MB): ");
        scanf("%lf", &usage);
        
        if (usage > 0) {
            bal -= usage;
            if (bal < 0) {
                bal = 0;
            }
            printf("Data deducted. Remaining: MB\n\n", bal);
        } else {
            printf("Invalid input. Please enter a positive value.\n\n");
        }
    }
    printf("Final Balance: %d MB\n", bal);
    
    return 0;
}

#include <stdio.h>

int main() {
    int units;
    char customertype;
    float rateunit, totalbill;
    
    
    printf("Enter number of units consumed: ");
    scanf("%d", &units);
    
    printf("Enter Customer Type (D for Domestic, C for Commercial): ");
    scanf(" %c", &customertype);
    
    if (units <= 100) {
        rateunit = 10;
    }
    else if (units > 100 && units <= 300) {
        if (customertype == 'D' ) {
            rateunit = 12;
        }
        else if (customertype == 'C' ) {
            rateunit = 15;
        }
        else {
            printf("Invalid customer type!\n");
            return 1;
        }
    }
    else if (units > 300) {
        rateunit = 20;
    }
    
    totalbill = units * rateunit;
    
    printf("Electricity Bill Calculation\n");
    printf("Units Consumed: %d\n", units);
    printf("Customer Type: %c\n", customertype);
    printf("Rate per Unit: Rs.", rateunit);
    printf("Total Bill: Rs. %.2f\n", totalbill);
    
    return 0;
}

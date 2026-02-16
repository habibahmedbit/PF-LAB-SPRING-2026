#include <stdio.h>

int main() {
    float salary, bonus;
    int service;
    int percentage;
    
    printf("Employee Bonus Calculation System\n");
    printf("Enter Salary: Rs. ");
    scanf("%f", &salary);
    
    printf("Enter Years of Service: ");
    scanf("%d", &service);
    

    if (service > 10) {
            percentage = 30;
        }
        else if (service > 5) {
            percentage = 20;
        }
        else {
            percentage = 10;
        }
    
    bonus = (salary * percentage) / 100;
    
    printf("Bonus Details\n");
    printf("Salary: Rs. %.2f\n", salary);
    printf("Years of Service: %d\n", service);
    printf("Bonus Percentage: %d%%\n", percentage);
    printf("----------------------------------\n");
    printf("Bonus Amount: Rs. %.2f\n", bonus);
    
    return 0;
}

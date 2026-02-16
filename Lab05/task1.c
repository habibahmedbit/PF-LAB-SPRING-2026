#include <stdio.h>

int main() {
    float cgpa, family_income;
    
    printf("Enter CGPA: ");
    scanf("%f", &cgpa);
    
    printf("Enter Family Income: ");
    scanf("%f", &family_income);
    
    if (cgpa >= 3.5) {
        if (family_income < 50000) {
            printf("\nScholarship Eligibility: 100%% Scholarship\n");
        }
        else {
            printf("\nScholarship Eligibility: 50%% Scholarship\n");
        }
    }
    else {
        if (cgpa >= 3.0 && family_income < 40000) {
            printf("\nScholarship Eligibility: 25%% Scholarship\n");
        }
        else {
            printf("\nScholarship Eligibility: No Scholarship\n");
        }
    }
    
    return 0;
}

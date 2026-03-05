#include <stdio.h>

int main(){
    double salary;
    printf("Salary Increment Table\n");
    printf("Enter base salary: ");
    scanf("%lf",&salary);
    for(int i=1;i<=10;i++){
        salary = salary + salary * 0.05;
        printf("Year %d: %.2f\n",i,salary);
    }
    return 0;
}

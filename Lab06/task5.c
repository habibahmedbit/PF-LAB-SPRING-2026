#include <stdio.h>

int main(){
    double units, sum=0;
    int count=0;
    float avg;
    printf("Electricity Bill Monitoring\n");
    printf("Enter daily units (-999 to stop): ");
    scanf("%lf",&units);
    while(units != -999){
        sum = sum + units;
        count++;
        printf("Enter daily units (-999 to stop): ");
        scanf("%lf",&units);
    }
    avg = sum / count;
    if(count>0)
        printf("Average consumption: %.2f units\n", avg);
    else
        printf("No data entered\n");
    return 0;
}

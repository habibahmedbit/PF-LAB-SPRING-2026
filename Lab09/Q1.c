#include<stdio.h>

void triageScore(int severity, int age, int vitals){
    int totalscore = (severity*0.5) + (age*0.3) + (vitals*0.2);
    if(totalscore > 7.0){
        printf("Immediate attention required!");
    }
    else if(totalscore > 4.0 && totalscore < 7.0){
        printf("Moderate Priority.");
    }else{
        printf("Can Wait...");
    }
}

int main (){
    int severity, age, vitals;
    printf("Enter Severity on scale of 1-10: ");
    scanf("%d", &severity);
    printf("Enter Age on scale of 1-10: ");
    scanf("%d", &age);
    printf("Enter Vitals on scale of 1-10: ");
    scanf("%d", &vitals);
    triageScore(severity,age,vitals);
}

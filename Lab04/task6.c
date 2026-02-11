#include <stdio.h>
int main (){
    int marks = 0;
    int percentage;
    int sub1, sub2, sub3, sub4, sub5 = 0;
    printf("Input Marks [5 Subjects]: ");
    scanf("%d %d %d %d %d", &sub1,&sub2,&sub3,&sub4,&sub5);
    marks = sub1+sub2+sub3+sub4+sub5;
    percentage= marks*100/500;
    if (percentage >= 85) {
        printf("Grade A"); 
    }
    else if (percentage >= 70 && percentage < 85) {
        printf("Grade B");
    }
    else if (percentage >= 50 && percentage < 70) {
        printf("Grade C");
    }
    else if (percentage < 50) {
        printf("Fail");
    }
    
    return 0;
}
    
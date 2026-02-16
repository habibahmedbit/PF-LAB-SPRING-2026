#include <stdio.h>

int main() {
    float a, b, c;
    
    printf("Triangle Type Identifier\n");
    printf("Enter side a: ");
    scanf("%f", &a);
    
    printf("Enter side b: ");
    scanf("%f", &b);
    
    printf("Enter side c: ");
    scanf("%f", &c);
    
    if(a + b <= c || b + c <= a || a + c <= b) {
        printf("\nNot a valid triangle!\n");
    }
    else {
        if(a == b && b == c) {
            printf("\nTriangle Type: Equilateral\n");
            printf("All sides are equal\n");
        }
        else if(a == b || b == c || a == c) {
            printf("\nTriangle Type: Isosceles\n");
            printf("Two sides are equal\n");
        }
        else {
            printf("\nTriangle Type: Scalene\n");
            printf("All sides are different\n");
        }
    }
    
    printf("Side a: \n", a);
    printf("Side b: \n", b);
    printf("Side c: \n", c);
    
    return 0;
}

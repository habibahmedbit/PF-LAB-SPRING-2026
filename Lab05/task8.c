#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float x, y, result;
    
    printf("Advanced Scientific Calculator\n");
    printf("-------Basic Operations-------\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("-------Scientific Operations-------:\n");
    printf("5 - Square Root\n");
    printf("6 - Power (x^y)\n");
    printf("7 - Logarithm (log base 10)\n");
    printf("8 - Absolute Value\n");
    printf("9 - Sine (sin)\n");
    printf("10 - Cosine (cos)\n");
    printf("11 - Tangent (tan)\n");
    printf("Select Operation (1-11): ");
    scanf("%d", &op);
    
    switch(op) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x + y;
            printf("Result: %.2f\n", result);
            break;
            
        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x - y;
            printf("Result: %.2f\n", result);
            break;
            
        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            result = x * y;
            printf("Result: %.2f\n", result);
            break;
            
        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &x, &y);
            if(y != 0) {
                result = x / y;
                printf("Result: %.2f\n", result);
            }
            else {
                printf("Error: Division by zero not allowed!\n");
            }
            break;
            
        case 5:
            printf("Enter a number: ");
            scanf("%f", &x);
            if(x >= 0) {
                result = sqrt(x);
                printf("Result: %.2f\n", result);
            }
            else {
                printf("Error: Square root of negative number not allowed!\n");
            }
            break;
            
        case 6:
            printf("Enter base and exponent: ");
            scanf("%f %f", &x, &y);
            result = pow(x, y);
            printf("Result: %.2f\n", result);
            break;
            
        case 7:
            printf("Enter a number: ");
            scanf("%f", &x);
            if(x > 0) {
                result = log10(x);
                printf("Result: %.2f\n", result);
            }
            else {
                printf("Error: Logarithm of zero or negative not allowed!\n");
            }
            break;
            
        case 8:
            printf("Enter a number: ");
            scanf("%f", &x);
            result = fabs(x);
            printf("Result: %.2f\n", result);
            break;
            
        case 9:
            printf("Enter angle in radians: ");
            scanf("%f", &x);
            result = sin(x);
            printf("Result: %.2f\n", result);
            break;
            
        case 10:
            printf("Enter angle in radians: ");
            scanf("%f", &x);
            result = cos(x);
            printf("Result: %.2f\n", result);
            break;
            
        case 11:
            printf("Enter angle in radians: ");
            scanf("%f", &x);
            result = tan(x);
            printf("Result: %.2f\n", result);
            break;
            
        default:
            printf("Invalid operation!\n");
    }
    
    return 0;
}

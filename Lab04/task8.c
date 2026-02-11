#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    float a, b, result;

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square of a number\n");
    printf("6. Cube of a number\n");
    printf("7. Square Root of a number\n");
    printf("8. Power (x^y)\n");
    printf("9. Absolute Value\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {

        case 1:
        case 2:
        case 3:
        case 4:
        case 8:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);

            if (choice == 1)
                result = a + b;
            else if (choice == 2)
                result = a - b;
            else if (choice == 3)
                result = a * b;
            else if (choice == 4) {
                if (b == 0) {
                    printf("Division by zero not allowed\n");
                    return 0;
                }
                result = a / b;
            }
            else if (choice == 8)
                result = pow(a, b);

            printf("Result: %.2f\n", result);
            break;

        case 5:
            printf("Enter number: ");
            scanf("%f", &a);
            result = a * a;
            printf("Result: %.2f\n", result);
            break;

        case 6:
            printf("Enter number: ");
            scanf("%f", &a);
            result = a * a * a;
            printf("Result: %.2f\n", result);
            break;

        case 7:
            printf("Enter number: ");
            scanf("%f", &a);
            if (a < 0) {
                printf("Square root of negative number not allowed\n");
                return 0;
            }
            result = sqrt(a);
            printf("Result: %.2f\n", result);
            break;

        case 9:
            printf("Enter number: ");
            scanf("%f", &a);
            result = fabs(a);
            printf("Result: %.2f\n", result);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
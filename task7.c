#include <stdio.h>
int main() {
    int amount = 0;
    printf("Input Amount: ");
    scanf("%d", &amount);
    if (amount >= 5000) {
        printf("You are eligible for a discount of 20%%");
        amount = amount - (amount * 20 / 100);
        printf("Your final bill amount after discount is: %d", amount);
    }
    else if (amount >= 3000 && amount < 5000) {
        printf("You are eligible for a discount of 10%%");
        amount = amount - (amount * 10 / 100);
        printf("Your final bill amount after discount is: %d", amount);
    }
    else {
        printf("You are not eligible for any discount");
    }
}
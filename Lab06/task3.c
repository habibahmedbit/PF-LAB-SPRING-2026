#include <stdio.h>

int main() {
    int code;
    int correct = 2468;
    printf("Office Door Access System\n");
    do {
        printf("Enter access code: ");
        scanf("%d", &code);
        if (code != correct) {
            printf("Access denied!\n");
        }
    } while (code != correct);
    printf("Access granted!\n");
    return 0;
}

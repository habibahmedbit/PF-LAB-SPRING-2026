#include <stdio.h>

int main() {
    int n, total = 0;
    printf("Total Distance Calculator\n");
    printf("Enter number of days: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        total = total + i;
    }
    printf("Total distance covered: %d km\n", total);
    return 0;
}

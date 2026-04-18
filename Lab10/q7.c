#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20];
    int qty;
    fptr = fopen("inventory.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    printf("Enter product name: ");
    scanf("%s", name);
    printf("Enter quantity: ");
    scanf("%d", &qty);

    fprintf(fptr, "%s %d\n", name, qty);

    fclose(fptr);

    fptr = fopen("inventory.txt", "r");
    
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Inventory contents:\n");
    
    while (fscanf(fptr, "%s %d", name, &qty) != EOF) {
        printf("%s %d\n", name, qty);
    }

    fclose(fptr);

    return 0;
}

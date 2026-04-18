#include <stdio.h>

int main() {
    FILE *fptr;
    char name[20];
    char grade[5];
    int i;
    
    fptr = fopen("grades.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    for (i = 0; i < 3; i++) {
        printf("Enter name: ");
        scanf("%s", name);
        printf("Enter grade: ");
        scanf("%s", grade);
        fprintf(fptr, "%s %s\n", name, grade);
    }
    
    fclose(fptr);
    
    fptr = fopen("grades.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    
    printf("Records in file:\n");
    while (fscanf(fptr, "%s %s", name, grade) != EOF) {
        printf("%s %s\n", name, grade);
    }
    
    fclose(fptr);

    return 0;
}

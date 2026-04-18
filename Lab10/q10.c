#include <stdio.h>

int main() {
    char name[20];
    int s1, s2, s3;
    float average;
    FILE *fptr;
    char line[100];

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter 3 scores: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    average = (s1 + s2 + s3) / 3.0;

    fptr = fopen("report.txt", "w+");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Scores: %d %d %d\n", s1, s2, s3);
    fprintf(fptr, "Average: %.2f\n", average);
    
    if (average >= 50.0) {
        fprintf(fptr, "Status: Pass\n");
    } else {
        fprintf(fptr, "Status: Fail\n");
    }

    rewind(fptr);

    printf("\nReport Card:\n");
    while (fgets(line, 100, fptr) != NULL) {
        printf("%s", line);
    }

    fclose(fptr);

    return 0;
}

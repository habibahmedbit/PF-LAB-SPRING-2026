#include <stdio.h>

int main() {
    FILE *fptr;
    int score;
    int val;
    int sum = 0;
    float average;
    int i;

    fptr = fopen("survey.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Enter 5 survey scores (1-10):\n");
    for (i = 0; i < 5; i++) {
        printf("Score %d: ", i + 1);
        scanf("%d", &score);
        fprintf(fptr, "%d\n", score);
    }

    fclose(fptr);

    fptr = fopen("survey.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    while (fscanf(fptr, "%d", &val) != EOF) {
        sum = sum + val;
    }

    fclose(fptr);

    average = (float)sum / 5;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}

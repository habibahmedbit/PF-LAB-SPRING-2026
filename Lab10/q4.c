#include <stdio.h>
#include <string.h>

int main() {
    char names[5][30];
    char searchName[30];
    int found = 0;
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        fgets(names[i], 30, stdin);
    }
    printf("Class List \n");
    for (int i = 0; i < 5; i++) {
        printf("%s", names[i]); 
    }
    printf("Enter a name to search: \n");
    fgets(searchName, 30, stdin);
    for (int i = 0; i < 5; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Found at position %d\n", i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("Student not found\n");
    }

    return 0;
}

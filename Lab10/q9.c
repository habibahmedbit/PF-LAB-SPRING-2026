#include <stdio.h>

int main() {
    FILE *fptr;

    fptr = fopen("config.txt", "r");

    if (fptr == NULL) {
        printf("Configuration file not found.\n");
        printf("Creating default config.txt...\n");
        
        fptr = fopen("config.txt", "w");
        
        fprintf(fptr, "max_users=50\n");
        fprintf(fptr, "timeout=30\n");
        fprintf(fptr, "language=english\n");
        
        fclose(fptr);
        
        printf("Default configuration file created successfully.\n");
    } else {
        printf("Configuration file found and opened successfully.\n");
        fclose(fptr);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    char email[50];
    char buffer[50];
    char formattedDisplay[50] = "Email: "; 

    printf("Enter Email Address: \n");
    scanf("%50s", email); 
    strcpy(buffer, email);
    char *ptr = strchr(buffer, '@');
    if (ptr == NULL) {
        printf("Error: '@' Not Found!\n");
    } else {
        char *domain = ptr + 1; 
        printf("Domain: %s\n", domain);
        if (strstr(domain, ".") != NULL) {
            printf("Domain verification: Valid (contains '.')\n");
        } else {
            printf("Domain verification: Invalid (missing '.')\n");
        }
        strcat(formattedDisplay, buffer);
        printf("Formatted String: %s\n", formattedDisplay);
    }

    return 0;
}

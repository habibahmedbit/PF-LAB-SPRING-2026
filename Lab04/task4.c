#include <stdio.h>
#include <string.h>

int main() {
    char username[10];
    char pass[10];

    printf("Enter Username: ");
    scanf("%9s", username);  
    printf("Enter Password: ");
    scanf("%9s", pass);      
    if (strcmp(username, "admin") == 0 && strcmp(pass, "1234") == 0) {
        printf("Login Successful!\n");
    } else {
        printf("Invalid Credentials!\n");
    }

    return 0;
}
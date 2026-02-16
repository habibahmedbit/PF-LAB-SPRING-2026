#include <stdio.h>
#include <string.h>

int main() {
    char username[20], password[20], otp[10];
    char correctuser[] = "admin";
    char correctpass[] = "password123";
    char correctotp[] = "1234";
    
    printf("Login Authentication System\n");
    printf("Enter Username: ");
    scanf("%s", username);
    
    printf("Enter Password: ");
    scanf("%s", password);
    
    printf("Enter OTP: ");
    scanf("%s", otp);
    
    if(strcmp(username, correctuser) == 0) {
        if(strcmp(password, correctpass) == 0) {
            if(strcmp(otp, correctotp) == 0) {
                printf("Login Successful!\n");
                printf("Welcome %s\n", username);
            }
            else {
                printf("Invalid OTP!\n");
            }
        }
        else {
            printf("Incorrect Password!\n");
        }
    }
    else {
        printf("Invalid Username!\n");
    }
    
    return 0;
}

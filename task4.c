#include <stdio.h>
int main (){

     char username[10] = "admin";
     char pass[10] = "1234";

     printf("Enter Username: ");
     scanf("%c", &username);
     
     printf("Enter Password: ");
     scanf("%c", &pass);
     
     if (username == "admin" && pass == "1234" ){
          printf("Login Successful! ");
     }
     else {
          printf("Invalid Credentials!");
     }
     return 0;
}
 
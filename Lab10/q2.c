#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char stored[]="Password";
	int attempt = 0;
	char input[20];
	while(attempt != 3){
		
		printf("Enter Pass: \n");
		scanf("%s", input);
		attempt +=1;
		int x = strlen(input);
		int result = strcmp(input,stored);
		if(x != 0){
			if(result == 0){
				printf("Password Matched! \n");
				break;  
			}else if(result < 0){
				printf("Password is alphabetically before the correct password! \n");
			}else if(result > 0){
				printf("Password is alphabetically after the correct password! \n");
			}
			}	
		if(attempt == 2){
			printf("Hint: %c%c%c\n", stored[0], stored[1], stored[2]);
		}
	}
	return 0;
}

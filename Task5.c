#include <stdio.h>
int main(){
   int choice;
   int balance = 0;
   int withdrawal;
   int deposit;

    do {
        printf("----MENU---- \n (1) Balance Inquiry \n (2) Cash Withdrawal \n (3) Deposit \n (4) Exit  ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Your Balance: %d\n", balance);
                
                break;
            case 2:
                printf("Enter Amount [Multiples Of 500]: ");
                scanf("%d", &withdrawal);
                if (withdrawal % 500 != 0) {
                    printf("Please enter multiples of 500 only!\n");
                } else if (withdrawal > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    balance = balance - withdrawal;
                    printf("Please collect your cash. New Balance: %d\n", balance);
                }
                
                break;
            case 3:
                printf("Enter Deposit Amount [Multiples Of 500]: ");
                scanf("%d", &deposit);
                if (deposit % 500 != 0) {
                    printf("Please enter multiples of 500 only!\n");
                } else {
                    balance = balance + deposit;
                    printf("Amount deposited successfully. New Balance: %d\n", balance);
                }
                
                break;
            case 4:
                printf("Thank you for using the ATM\n");
                
                break;
            default:
                printf("Invalid choice\n");
        }

        printf("\n"); 
    } while (choice != 4); 

    return 0;
}
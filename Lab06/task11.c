#include <stdio.h>
int main(){
    double total=0,price;
    int choice;
    do{
        printf("Enter price: ");
        scanf("%lf",&price);
        total+=price;
        printf("Add another item? (1 for yes, 0 for no): ");
        scanf("%d",&choice);
    }while(choice!=0);
    if(total>3000){
        total = total*0.9;
    }
    printf("Total Price: %.2f\n",total);
    return 0;
}

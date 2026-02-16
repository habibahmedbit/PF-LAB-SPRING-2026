#include <stdio.h>

int main() {
    int category, item, qty;
    float price, total;
    char foodname[20];
    
    printf("Online Food Ordering System\n 1 - Fast Food\n 2 - Desi Food\n");
    printf("Select Category: ");
    scanf("%d", &category);
    printf("Enter Quantity: ");
    scanf("%d", &qty);
    
    switch(category) {
        case 1:
            printf("Fast Food Menu:\n 1 - Burger (Rs. 500)\n 2 - Pizza (Rs. 1200)\n");
            printf("Select Item: ");
            scanf("%d", &item);
            
            switch(item) {
                case 1:
                    strcpy(foodname, "Burger");
                    price = 500;
                    break;
                case 2:
                    strcpy(foodname, "Pizza");
                    price = 1200;
                    break;
            }
            break;
            
        case 2:
            printf("Desi Food Menu:\n 1 - Biryani (Rs. 350)\n 2 - Karahi (Rs. 1500)\n");
            printf("Select Item: ");
            scanf("%d", &item);
            
            switch(item) {
                case 1:
                    strcpy(foodname, "Biryani");
                    price = 350;
                    break;
                case 2:
                    strcpy(foodname, "Karahi");
                    price = 1500;
                    break;
            }
            break;
            
        default:
            printf("Invalid category!\n");
            return 1;
    }
    
    total = price * qty;
    
    printf("Order Summary\n");
    printf("Item: %s\n", foodname);
    printf("Price per item: Rs. %.2f\n", price);
    printf("Quantity: %d\n", qty);
    printf("---------------------------\n");
    printf("Total Bill: Rs. %.2f\n", total);
    
    return 0;
}

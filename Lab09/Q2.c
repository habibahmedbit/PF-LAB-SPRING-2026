#include<stdio.h>
float applyDiscount(float price, int tier){
    float discountedprice = price;
    if(tier == 1){
        discountedprice = price * 0.95;
    }else if(tier == 2){
        discountedprice = price * 0.90;
    }else if(tier == 3){
        discountedprice = price * 0.80;
    }else if(tier == 4){
        discountedprice = price * 0.70;
    }
    return discountedprice;
}

void printInvoice(float original, float discounted){
    
    if(discounted < 2000){
        printf("Delivery Charges of Rs. 150 Added. \n");
        discounted += 150;
    }
    printf("Original Price: Rs. %.2f\n", original);
    printf("Discounted Price: Rs. %.2f\n", discounted);
    
}

int main(){
    float price,discounted;
    int tier;
    printf("Your Tier Level \n [1]Bronze [2]Silver [3]Gold [4] Platinum : ");
    scanf("%d", &tier);
    printf("\nEnter Price: ");
    scanf("%f", &price);
    discounted = applyDiscount(price,tier);
    printInvoice(price,discounted);
    return 0;
}

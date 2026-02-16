#include <stdio.h>
int main() {
    int vehicletype, parkingtype, hours;
    float rateperhour, totalfee;
    char vehiclename[20], parkingcategory[20];
    
    printf("Select Vehicle Type:\n 1 - Car\n 2 - Bike\n 3 - Bus\n");
    printf("Enter Vehicle Type (1/2/3): ");
    scanf("%d", &vehicletype);
    printf("Enter Hours Parked: ");
    scanf("%d", &hours);
    
    switch (vehicletype) {
        case 1: 
            strcpy(vehiclename, "Car");
            printf("1 - Regular Parking (Rs. 50 per hour)\n 2 - VIP Parking (Rs. 100 per hour)\n");
            printf("Enter Parking Type (1/2): ");
            scanf("%d", &parkingtype);
            
            switch (parkingtype) {
                case 1:
                    rateperhour = 50;
                    strcpy(parkingcategory, "Regular");
                    break;
                case 2:
                    rateperhour = 100;
                    strcpy(parkingcategory, "VIP");
                    break;
            }
            break;
            
        case 2:  
            strcpy(vehiclename, "Bike");
            printf("\nParking Options:\n");
            printf("1 - Regular (Rs. 20 per hour)\n 2 - Premium (Rs. 40 per hour)\n");
            printf("Enter Parking Type (1/2): ");
            scanf("%d", &parkingtype);
            
            switch (parkingtype) {
                case 1:
                    rateperhour = 20;
                    strcpy(parkingcategory, "Regular");
                    break;
                case 2:
                    rateperhour = 40;
                    strcpy(parkingcategory, "Premium");
                    break;
            }
            break;
            
        case 3:  
            strcpy(vehiclename, "Bus");
            strcpy(parkingcategory, "Fixed Rate");
            rateperhour = 200;
            break;
            
        default:
            printf("Invalid vehicle type!\n");
            return 1;
    }
    
    totalfee = rateperhour * hours;
    
    printf("Parking Fee Receipt\n");
    printf("Vehicle Type: ", vehiclename);
    printf("Parking Category: %s\n", parkingcategory);
    printf("Rate per Hour: Rs. ", rateperhour);
    printf("Hours Parked: %d\n", hours);
    printf("Total Parking Fee: Rs. ", totalfee);
    
    return 0;
}

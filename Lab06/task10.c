#include <stdio.h>
int main(){
    int rating,excellent=0,satisfactory=0,needs_improvement=0;
    printf("Enter employee performance ratings (0-100, -1 to stop): ");
    scanf("%d",&rating);
    while(rating!=-1){
        if(rating>=85)excellent++;
        else if(rating>=60)satisfactory++;
        else if(rating>=0)needs_improvement++;
        scanf("%d",&rating);
    }
    printf("Excellent: %d\nSatisfactory: %d\nNeeds Improvement: %d\n",excellent,satisfactory,needs_improvement);
    return 0;
}

#include<stdio.h>
int main(){
    int pspace=45;
    int choice=1;
    printf("Parking Space Management\n Enter 1 to park, 0 to leave: \n");
    while(pspace!=0 && choice!=0){
        scanf("%d",&choice);

        if(choice==1){
            if(pspace>0){
                pspace--;
                printf("Car parked. Remaining spaces: %d\n",pspace);
            }else{
                printf("Parking full. Cannot park.\n");
            }

}
}
    return 0;
}
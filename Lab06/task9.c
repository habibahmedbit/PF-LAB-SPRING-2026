#include <stdio.h>
int main(){
    int n;
    int total=0;
    printf("Enter Number of Tickets: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        total = total + i*100;
    printf("%d\n",total);
    return 0;
}

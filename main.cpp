#include <stdio.h>

int main() {
    int price[3];
    printf("ENTER THE PRICE OF FIRST PRODUCT:");
    scanf("%d",&price[0]);
    printf("ENTER THE PRICE OF SECOND PRODUCT:");
    scanf("%d",&price[1]);
    printf("ENTER THE PRICE OF THIRD PRODUCT:");
    scanf("%d",&price[2]);
    printf("The Total bill is : %f ",(price[0]+price[0]*0.18)+(price[1]+price[1]*0.18)+(price[2]+price[2]*0.18));
    return 0;
}

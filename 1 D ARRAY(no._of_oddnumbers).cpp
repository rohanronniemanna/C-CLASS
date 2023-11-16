#include <stdio.h>
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }

    }
    return count;
}
int main() {
    int arr[9]={1,8,9,12,11,16,13,15,10};
    printf("the odd numbers are : %d",countodd(arr,9));


    return 0;
}

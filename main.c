#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int operations(int a,int b){
    int add,subs,mul,div;
    add=a+b;
    if(a>b){
        subs=a-b;
    }else{
        subs=b-a;
    }
    mul=a*b;
    if(a>b){
        div=a/b;
    }else{
        div=b/a;
    }
    printf("THE SUM OF NUMBERS ARE: %d\n",add);
    printf("THE SUBTRACTION OF NUMBERS ARE: %d\n",subs);
    printf("THE MULTIPLICATION OF NUMBERS ARE: %d\n",mul);
    printf("THE DIVISION OF NUMBERS ARE: %d\n",div);
}
int main() {
    operations(12, 6);
}

//take a positive integer inout and tell if it is divisible by 5 or 3 but not divisible by 15.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if (x%3==0 || x%5==0 && x%15!=0){
        if (x%3==0 && x%15!=0 ){
            printf("The is divisible by 3 but not 15");
        }
        if (x%5==0 && x%15!=0 ){
            printf("The is divisible by 5 but not 15");
        }
    }
    else{
        printf("Not Divisible by anything ");
    }
    return 0;
}


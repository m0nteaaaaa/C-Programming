/*
To find out if the number is divisible by 5 or 3
*/
#include<stdio.h>
int main(){
    int num ;
    printf("Enter your Number : ");
    scanf("%d",&num);
    if (num%3==0 || num%5==0){
        if (num%3==0){
        printf("The Number is divisible by 3 ");
        }
        if (num%5==0){
            printf("The Number is divisible by 5");
        }
    }
    else{
        printf("The Number is not divisible by 3 and 5");
    }
    return 0;
}

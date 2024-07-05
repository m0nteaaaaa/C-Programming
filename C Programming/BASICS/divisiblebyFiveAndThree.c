/*
To find out if number is divisible by 3 and 5 or not
*/
#include<stdio.h>
int main(){
    int num ;
    printf("Enter your Number : ");
    scanf("%d",&num);
    if (num%3==0 && num%5==0){
        printf("The Number is divisible by 3 and 5");
    }
    else{
        printf("The Number is not divisible by 3 and 5");
    }
    return 0;
}

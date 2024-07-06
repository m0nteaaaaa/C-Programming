/*
To find out if 3 input can for a triangle or not
*/
#include<stdio.h>
int main(){
    int num1 ;
    printf("Enter your Number : ");
    scanf("%d",&num1);
    int num2 ;
    printf("Enter your Number : ");
    scanf("%d",&num2);
    int num3 ;
    printf("Enter your Number : ");
    scanf("%d",&num3);
    if (num2+num3>num1 || num1+num3>num2 || num1+num2>num3){
        printf("The Input can form a Triangle");
    }
    else{
        printf("The Inputs Canot Form a Triangle");
    }
    return 0;
}

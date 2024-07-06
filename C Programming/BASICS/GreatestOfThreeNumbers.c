/*
To find out the greater  of three numbers
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
    if (num1>num2 && num1>num3){
        printf("The Number 1 is Greater : %d ",num1);
    }
    if (num2>num1 && num2>num3){
        printf("The Number 2 is Greater : %d ",num2);
    }
    else{
        printf("The Number 3 is Greater : %d",num3);
    }
    return 0;
}

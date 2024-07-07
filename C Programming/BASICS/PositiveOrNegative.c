//To find out if number is even or odd
#include<stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d",&x);
    if (x%2==0){
        printf("The number is EVEN");
    }
    else{
        printf("The number is ODD");
    }
    return 0;
}
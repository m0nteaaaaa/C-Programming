/*
To print the fraction part of a number i.e
3.14 print only 0.14
2.99 print only 0.99
*/
#include<stdio.h>
int main(){
    float x;
    printf("Enter the number : ");
    scanf("%f",&x);
    float z;
    z = x;
    int y;
    y = x;
    printf("The fraction part is : %f",z-y);
    return 0;
}
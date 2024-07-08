// To find SIMPLE INTREST 
#include<stdio.h>
int main(){
    float p;
    printf("Enter Principal Amount: ");
    scanf("%f",&p);
    float r;
    printf("Enter Rate Of Intrest : ");
    scanf("%f",&r);
    float t;
    printf("Enter Time Period : ");
    scanf("%f",&t);
    float si;
    si = (p*r*t)/100;
    printf("The SI is : %f",si);

    return 0;
}
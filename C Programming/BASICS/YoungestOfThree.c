//If the age of Ram, Shyam and Ajay are input through the Keyboard , write a program to determine the youngest of the three ?
#include<stdio.h>
int main(){
    int ram ;
    printf("Enter the Age : ");
    scanf("%d",&ram);
    int shyam ;
    printf("Enter the Age  : ");
    scanf("%d",&shyam);
    int ajay ;
    printf("Enter the Age  : ");
    scanf("%d",&ajay);
    if (ram<shyam && ram<ajay){
        printf("Ram is youngest : %d ",ram);
    }
    if (shyam<ram && shyam<ajay){
        printf("Shyam is youngest : %d ",shyam);
    }
    if(ajay<ram && ajay<shyam){
        printf("Ajay is youngest : %d",ajay);
    }
    return 0;
}
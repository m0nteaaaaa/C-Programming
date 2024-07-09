//To check if the nymber is 3digit poitive number or not
#include<stdio.h>
int main(){
    int num ;
    printf("Enter your Number : ");
    scanf("%d",&num);
    if (num >99 && num<999){
        printf("The Number is Positive 3 Digit Number ");
    }
    else{
        printf("The Number is not Positive 3 Digit Number");
    }
    return 0;
}
/*
To find out leap year
*/
#include<stdio.h>
int main(){
    int year;
    printf("Emter Your Year : ");
    scanf("%d",&year);
    if (year%4==0){
        printf("Leap Year");
    }
    else{
        printf("Not a Leap Year");
    }
    return 0;
}

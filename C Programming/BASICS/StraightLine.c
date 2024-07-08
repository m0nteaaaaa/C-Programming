//Given Three points x1,x2,x3 and y1,y2,y3 ,write a program to check if all the three points fall on one straight line
#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter X1 :");
    scanf("%d",&x1);
    printf("Enter X2 :");
    scanf("%d",&x2);
    printf("Enter X3 :");
    scanf("%d",&x3);
    printf("Enter Y1 :");
    scanf("%d",&y1);
    printf("Enter Y2 :");
    scanf("%d",&y2);
    printf("Enter Y3 :");
    scanf("%d",&y3);
    int m1 = (y2-y1)/(x2-x1);
    int m2 = (y3-y2)/(x3-x2);
    if (m1==m2){
        printf("All points lie in a Straight Line");
    }
    else{
        printf("The points do not lie in a Staight Line");
    }
    return 0;
}
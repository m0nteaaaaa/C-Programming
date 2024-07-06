//Given a point(x,y) , write a program to find pot if it lies on the x-axis , y-axis or at the origin .
#include<stdio.h>
int main(){
    int x,y;
    printf("Ther the x point :  ");
    scanf("%d",&x);
    printf("Ther the y point :  ");
    scanf("%d",&y);
    if (x==0 && y==0){
        printf("The points lie at the origin");
    }
    else if(x==0 && y!=0){
        printf("The points lie at y axis");
    }
    else{
        printf("The points lie at x axis");
    }
    return 0;
}


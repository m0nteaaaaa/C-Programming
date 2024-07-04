#include<stdio.h>
int main(){
    int area,l,b,perimeter;
    printf("Enter the Length of Rectangle : ");
    scanf("%d",&l);
    printf("Enter the Breath of Rectangle : ");
    scanf("%d",&b);
    area = l*b;
    perimeter = 2*(l*b);
    if(area>perimeter){
        printf("Area is Greater");
    }
    else{
        printf("Perimeter is Greater");
    }
    return 0;
}
/*
To tell if the area is greater or perimeter
area = length*breadth;
perimeter = 2*(length*breadth)
*/
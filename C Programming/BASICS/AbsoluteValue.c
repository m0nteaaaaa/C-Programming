#include<stdio.h>
int main(){
    int num;
    printf("Enter Your Number : ");
    scanf("%d",&num);
    if (num<0){
        num = num * -1;
        printf("The absolute Value is : %d ",num);
    }
    else{
        printf("The Absolute Value is : %d ",num);
    }
    return 0;
}
/* 
-7 = 7
8 = 8
-20 = 20
1 = -1
*/
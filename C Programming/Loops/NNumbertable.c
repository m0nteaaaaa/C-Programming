//Print the Table for given input
#include<stdio.h>
int main(){
    int t,n;
    printf("Enter the table : ");
    scanf("%d",&t);
    for (int i =1; i<=10;i++){
        n = t * i;
        printf("\n%d",n);
    }
    return 0;
}
//Display this AP - 1 3 5 7 9 11 .... n
#include<stdio.h>
int main(){
    int n;
    printf("Enter the AP : ");
    scanf("%d",&n);
    for (int i =1; i<=2*n-1;i=i+2){
        printf("\n%d",i);
    }
    return 0;
}
//Display this AP - 4 7 10 13 16 .... n Without MAths
#include<stdio.h>
int main(){
    int n;
    printf("Enter the AP : ");
    scanf("%d",&n);
    int a =4;
    for (int i =1; i<=n-1;i++){
        printf("\n%d",a);
        a = a+3;
    }
    return 0;
}

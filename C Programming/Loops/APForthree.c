//Display this AP - 4 7 10 13 16 .... n
#include<stdio.h>
int main(){
    int n;
    printf("Enter the AP : ");
    scanf("%d",&n);
    for (int i =4; i<=3*n-1;i=i+3){
        printf("\n%d",i);
    }
    return 0;
}

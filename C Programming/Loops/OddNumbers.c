//Print the Odd Numbers from 1 to 100
#include<stdio.h>
int main(){
    for (int i =1; i<=100;i++){
        if(i%3==0) printf("\n%d",i);
    }
    return 0;
}
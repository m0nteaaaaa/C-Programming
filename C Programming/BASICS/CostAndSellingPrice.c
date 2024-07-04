#include<stdio.h>
int main(){
    float cp,sp;
    printf("Enter the Cost of the Product : ");
    scanf("%f",&cp);
    printf("Enter the Seling Price of the Product : ");
    scanf("%f",&sp);
    if (sp>cp){
        printf("The Seller has incurred a Profit ");
    }
    if (sp==cp){
        printf("The Seller has incuured neither a Profit or Loss");
    }
    else{
        printf("The Seller has incurred a Loss  ");
    }
    return 0;
}
/*
To find out profit or loss of an shopkeeper
*/
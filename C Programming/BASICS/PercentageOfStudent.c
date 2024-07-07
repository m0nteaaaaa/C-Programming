/*Enter the percentage and tells that if student has done good or bad*/
#include<stdio.h>
int main(){
    int p;
    printf("Enter the percerntage :   ");
    scanf("%d",&p);
    if(p>90){
        printf("Excellent");
    }
    else if(p>80){
        printf("Very Good");
    }
    else if(p>70){
        printf("Good");
    }
    else if(p>60){
        printf("Can Do Better");
    }
    else if(p>50){
        printf("Average");
    }
    else if(p>40){
        printf("Below Average");
    }
    else{
        printf("Fail");
    }
    return 0;
}

/*
To find out percentage and cgpa of given marks
*/
#include<stdio.h>
int main(){
    float f1 = 110; //Cmos
    float f2 = 117; //DSP
    float f3 = 122; //ICT
    float f4 = 120; //Control 
    float f5 = 108; //Microwave
    float percentage = (( f1 + f2 + f3 + f4 + f5 )/750) * 100;
    printf("Your percentage is : %f \n",percentage);
    float cgpa = percentage/9.5 ;
    printf("Your SGPA is : %f ",cgpa);
    return 0;
}


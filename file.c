#include<stdio.h>

float sum(float a, float b){return a+b;}
float sub(float a, float b){return a-b;}
float div(float a, float b){return a/b;}
float mul(float a, float b){return a*b;}



int main(){

    float (*ptrArray[4])(float, float) = {&sum,&sub,&div,&mul};

    int choice;

    float a,b;

    printf("Enter a choice: 0 - Sum, 1 - Sub, 2 - div, 3 - mul");
    scanf("%d", &choice);

    printf("Enter two Digits: ");
    scanf("%f %f", &a, &b);


    printf("Result: %f", ptrArray[choice] (a,b));






    return 0;
}
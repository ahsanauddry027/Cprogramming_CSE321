#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void swapUsingPtr(int *ptrX, int *ptrY);
void swap(int ptrX, int ptrY);

int main(){

    int a=500;
    int b=600;

    printf("Before Swap: \n");
    printf("Value of A: %d\n",a);
    printf("Value of B: %d\n",b);

    //swap(a,b); //Swapping On going;
    swapUsingPtr(&a, &b);
   
    printf("After Swap: \n");
    printf("Value of A: %d\n",a);
    printf("Value of B: %d\n",b);

    return 0;
}


void swapUsingPtr(int *ptrX, int *ptrY){
    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
}

void swap(int ptrX, int ptrY){
    int temp = ptrX;
    ptrX = ptrY;
    ptrY = temp;
}
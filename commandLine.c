#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int noOfargs, char *args[]){

    printf("Number of passed arguments: %d\n",noOfargs-1);
    
    // By default args stores the name of the argument as command line argument. So no of arguments will show = names + arguments that you actually passed.

    // the last value of this array will be null, 
    // The first value of this array will store the file location.

    for(int i=0;i<noOfargs;i++){
        printf("No of arguments [%d]: %s\n",i,args[i]);
    }



    return 0;

}
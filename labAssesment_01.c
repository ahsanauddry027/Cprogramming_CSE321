#include <stdio.h>


int main( int args, char *argv[]){

    int arr[] = {5,6,7,72,8};

    int newArr[args-1];

    int count=0;

    for(int i=1;i<args;i++){
        printf("%s\n",argv[i]);
    }

    for(int i=1;i<args;i++){
        newArr[i-1] = atoi(argv[i]);
    }

    for(int i=0;i<sizeof(arr);i++){

        for(int j=0;j<args-1;j++){
            if(arr[i]==newArr[j]){
                count+=1;
                break;
            }
        }
        

    }

    if(count == args-1){
        printf("SubSet");
    }else printf("Not Subset");



    return 0;
}
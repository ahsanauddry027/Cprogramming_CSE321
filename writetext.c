#include<stdio.h>
#include<fcntl.h>



int main(){
    char buffer[500];


    int fd;

    fd = open("text.txt", O_RDONLY);

    if(fd != -1){
        read(fd,buffer,sizeof(buffer));
        printf("%s",buffer);

    }else if(fd==-1){
        printf("file was not found");
    }


    close(fd);
}
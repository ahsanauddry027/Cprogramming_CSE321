#include<stdio.h>
#include<fcntl.h>



int main(){
    char buffer[80];

    char message[] = "Hello, world";

    int fd;

    fd = open("text.txt", O_RDWR);

    if(fd != -1){
        write(fd,message,sizeof(message));
        lseek(fd,0,0);
        read(fd,buffer,sizeof(message));
        printf("%s",buffer);

    }else if(fd==-1){
        printf("file was not found");
    }


    close(fd);
}
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int print_logo(){
    printf("%s\n","");
    printf("%s\n","  __       _        _ _");
    printf("%s\n"," / _| __ _| | _____| (_)_ __  _   ___  __");
    printf("%s\n","| |_ / _` | |/ / _ \\ | | '_ \\| | | \\ \\/ /");
    printf("%s\n","|  _| (_| |   <  __/ | | | | | |_| |>  <");
    printf("%s\n","|_|  \\__,_|_|\\_\\___|_|_|_| |_|\\__,_/_/\\_\\");
    printf("%s\n","");
}

int main(){
    print_logo();
    char cmd[100];
    while(1){
        printf("\r\n%s ","#");
        gets(cmd);
        if(strcmp(cmd,"")==0){
            printf("%s","#");
        }else if(strcmp(cmd,"ls")==0){
            printf("%s","README.md");
        }else if(strcmp(cmd,"cat README.md")==0){
            printf("%s\n","## FakeLinux");
            printf("%s\n","> a fake linux");
            printf("%s","http://github.com/fakelinux");
        }else if(strcmp(cmd,"ps")==0){
            printf("%s\n","   PID TTY          TIME CMD");
            printf("%s\n","  1263 pts/2    00:00:00 bash");
            printf("%s","  1518 pts/2    00:00:00 ps");
        }else if(strcmp(cmd,"whoami")==0){
            printf("%s","root");
        }else if(strcmp(cmd,"lsusb")==0){
            printf("%s\n","Bus 002 Device 001: ID 1d6b:0003 Linux Foundation 3.0 root hub");
            printf("%s","Bus 001 Device 001: ID 1d6b:0002 Linux Foundation 2.0 root hub");
        }else{
            printf("Command '%s' not found",cmd);
        }
    }
    return 0;
}

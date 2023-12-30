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
        }else{
            printf("Command '%s' not found",cmd);
        }
    }
    return 0;
}

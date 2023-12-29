#include <stdio.h>
#include <string.h>

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
    char cmd[10];
    while(1){
        printf("\n%s ","#");
        scanf("%s",cmd);
        if(strcmp(cmd,"ls")==0){
            printf("\n# %s\n","README.md");
        }
    }
    return 0;
}

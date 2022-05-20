#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main(){
    char cwd[PATH_MAX];
    if (getcwd(cwd, sizeof(cwd)) != NULL){
        printf("%s\n", cwd);
    } else {
        printf("Couln't find current working directory\n");
        exit(1);
    }

}
#define _XOPEN_SOURCE 500 
#include <ftw.h>
#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

static int rmFiles(const char * path, const struct stat *sbuf, int type, struct FTW* ftwb){
    if (remove(path) < 0){
        perror("ERROR : remove");
        return -1;
    }
    return 0;
}

int main(int argc, char* argv[]){
    if (nftw(argv[1],rmFiles,100, FTW_DEPTH|FTW_MOUNT|FTW_PHYS) < 0){
        perror("ERROR: ntfw");
        exit(1);
    }
    return 0;
}
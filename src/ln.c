#include <unistd.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv){
    int fileNameFound = 0;
    int symbolicMode = 0;
    char *FilePath = NULL;
    char *LinkPath = NULL;
    if (argv[1] != NULL){
        for (int i = 1; i < argc; i++){
		if (strcmp(argv[i],"-s") == 0){
			symbolicMode = 1;
		} else if (fileNameFound == 0){
			FilePath = argv[i];
            fileNameFound = 1;
		} else {
            LinkPath = argv[i];
        }
	}
    }
    int status;
    if (symbolicMode == 1){
        status = symlink(FilePath, LinkPath);
        if (status != 0){
            printf("Couldn't create the symlink\n");
        }
    } else {
        status = link(FilePath, LinkPath);
        if (status != 0){
            printf("Couldn't create the hardlink\n");
        }
    }
    return 0;
}
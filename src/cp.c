#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <errno.h>

int main(int argc, char**argv){
	int isDirectory = 0;
	DIR* dir = opendir(argv[1]);
	if(dir != NULL){
	closedir(dir);
	isDirectory = 1;
	} else if (errno == ENOTDIR)
    	{
     	isDirectory = 0;
    	} else { exit(1); }
	FILE* f;
        FILE* out;
	switch(isDirectory){
		case 1 :
			printf("not implemented yet\n");
			break;
		case 0 :
			if ((f = fopen(argv[1], "r")) == NULL){
			printf("The file doesn't exist or cannot be opened\n");
        		exit(1);
			}
			char* line = NULL;
        		ssize_t charNb;
        		size_t len;
			out = fopen(argv[2], "w");
			while ((charNb = getline(&line, &len, f)) != -1){
			fprintf(out, "%s", line);
			}
			break;
	}
	return 0;
}

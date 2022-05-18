#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>

int main(int argc, char** argv){
	char* path = ".";
	DIR* dir;
	struct dirent *ent;
	if (argv[1] != NULL){
	path = argv[1];
	}
	if ((dir = opendir(path)) != NULL) {
	while ((ent = readdir(dir)) != NULL) {
	if (ent->d_name[0] != '.'){
    	printf ("%s\n", ent->d_name);
	}
  	}
	closedir(dir);
	} else {
	printf("The directory doesn't exist or is unreadable\n");
	exit(1);
	}
}

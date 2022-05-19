#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <dirent.h>

int main(int argc, char** argv){
	DIR* dir;
	struct dirent *ent;
	char* path = ".";
	int allMode = 0;
	int aArgumentFirst = 0;
	if (argv[1] != NULL){
	for (int i = 1; i < argc; i++){;
		if (strcmp(argv[i],"-a") == 0){
			allMode = 1;
		} else {
			path = argv[i];
		}
	}
	}
	if ((dir = opendir(path)) != NULL) {
	while ((ent = readdir(dir)) != NULL) {
	if (allMode == 0){
	if (ent->d_name[0] != '.'){
    	printf ("%s\n", ent->d_name);
	}
	} else {
		printf ("%s\n", ent->d_name);
	}
  	}
	closedir(dir);
	} else {
	printf("The directory doesn't exist or is unreadable\n");
	exit(1);
	}
}

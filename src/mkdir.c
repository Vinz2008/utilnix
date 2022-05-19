#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <errno.h>
#include <unistd.h>

int main(int argc, char** argv){
	errno = 0;
	int status = mkdir(argv[1], 0777);
	if (status == -1){
	switch(errno){
		case EACCES:
			printf("You don't have write permission to the parent directory\n");
			exit(1);
		case EEXIST:
			printf("The directory already exists\n");
			exit(1);
		case ENAMETOOLONG:
			printf("The name of the directory is too long\n");
			exit(1);
		default:
			printf("The directory couldn't be created\n");
			exit(1);
	}
	}
	return 0;
}

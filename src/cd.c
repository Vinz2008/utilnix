#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv){
	if (argc > 1){
	printf("argv[1] : %s\n", argv[1]);
	if (chdir(argv[1]) != 0){
	printf("Couldn't change directory to %s\n", argv[1]);
	}
	}
}

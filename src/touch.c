#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv){
	FILE* f = fopen(argv[1], "a");
	if (f == NULL){
	printf("File can't be created\n");
	exit(1);
	}
	fclose(f);
}

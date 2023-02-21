#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    FILE* f;
	char* line = NULL;
	size_t len;
    int lineNb = 0;
	if ((f = fopen(argv[1], "r")) == NULL){
	printf("The file doesn't exist or cannot be opened\n");
	exit(1);
	}
	while (getline(&line, &len, f) != -1){
    lineNb++;
	printf("%i %s",lineNb,line);
	}
	fclose(f);
    return 0;
}

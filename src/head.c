#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
	FILE* f;
	char* line = NULL;
	ssize_t charNb;
	size_t len;
	if ((f = fopen(argv[1], "r")) == NULL){
	printf("The file doesn't exist or cannot be opened\n");
	exit(1);
	}
	for (int i = 0; i < 10; i++){
	charNb = getline(&line, &len, f);
	printf("%s",line);
	}
	fclose(f);
	return 0;
}

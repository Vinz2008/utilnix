#include <stdio.h>

int main(int argc, char** argv){
	if (remove(argv[1]) != 0){
	printf("Can't remove this file\n");
	}
	return 0;
}



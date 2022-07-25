#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	char* argv_list[10];
	int i;
	int i2 = 1;
	for (i = 0; i < argc - 1; i++){
	printf("argv[i2] : %s\n", argv[i2]);
	argv_list[i] = argv[i2];
	i2++;
	}
	argv_list[i++] = (char *)0;
	//char * argv_list[] = {"ls","-lart","/home",NULL};
	printf("argv[1] :  %s\n", argv[1]);
	int link[2];
	char output[4096];
	pid_t pid;
	if (pipe(link)==-1){
		printf("pipe error\n");
	}
	if ((pid = fork()) == -1){
		printf("fork error\n");
	}
	char* slash_bin = "/bin/";
	printf("TEST\n");
	printf("exe : %s\n", strncat(slash_bin, argv[1], strlen(argv[1])));

	if (pid == 0){
	dup2(link[1], STDOUT_FILENO);
    close(link[0]);
    close(link[1]);

	execv(strncat(slash_bin, argv[1], strlen(argv[1])),argv_list);
	//exit(0);
	}
	else{
		close(link[1]);
    	int nbytes = read(link[0], output, sizeof(output));
		printf("Output: (%.*s)\n", nbytes, output);
    	wait(NULL);
	}
}

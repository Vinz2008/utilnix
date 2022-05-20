#define _GNU_SOURCE
#include <stdio.h>
#include <sched.h>

int main(){
	cpu_set_t cpu;
	CPU_ZERO(&cpu);
	sched_getaffinity(0, sizeof(cpu), &cpu);
	int cpucount = CPU_COUNT(&cpu);
	printf("%d\n", cpucount);
	return 0;
}

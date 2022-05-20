#include <sys/sysinfo.h>
#include <stdio.h>

int main(){
    struct sysinfo info;
    sysinfo(&info);
    printf("Uptime : %ld\n", info.uptime);
    return 0;
}
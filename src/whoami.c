#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pwd.h>

int main(){
    register struct passwd *passwordptr;
    register uid_t uid;
    uid = geteuid();
    passwordptr = getpwuid(uid);
    if (passwordptr)
    {
      printf("%s\n", passwordptr->pw_name);
    } else {
        printf("Couldn't find what user you are logged in\n");
        exit(1);
    }
    return 0;
}
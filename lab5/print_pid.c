#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
    printf("\n");
    printf("The ID of this process is: %d\n", getpid());
    printf("The ID of the parent process is: %d\n", getppid());
    sleep(30); /* sleeps for 30 seconds */
    printf("I am awake!\n");
    return 0;
}
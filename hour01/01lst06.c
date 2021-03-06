#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
/* #define SHOW_PID */  /* MACRO NOT DEFINED */

int main(int argc,char **argv) {
    pid_t PID;          /* Process ID */

    (void) argc;
    (void) argv;

#ifdef SHOW_PID
    PID = getpid();     /* Get Process ID */
    printf("Hello World! Process ID is %d\n",
        (int)PID);
#else
    puts("Hello World!");
#endif
    return 0;
}

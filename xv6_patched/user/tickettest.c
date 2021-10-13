#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

// TODO: Register in Makefile
int main(int argc, char *argv[])
{
    //TODO: Implement ticket test
    int i;
    int rc;
    printf(1, "Parent PID: %d\n", getpid());
    for (i = 1; i <= 5; i++){
        rc = fork();
        if (rc == 0)
        {
            settickets(i * 10);
            printf(1, "Child %d PID: %d\n", i, getpid());
            for(;;){}
            //exit();
        }
    }
    exit();
}
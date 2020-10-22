#include<stdlib.h>
#include<unistd.h>

int main(void) {
        pid_t pid;

        if((pid=fork())<0)
                perror("error in fork()\n");
        else if(pid==0) {
                printf("Child PID is %d, Parent PID is %d\n",getppid(),getpid());
	return 0;
        }
        else {
                printf("Parent PID id %d\n",getpid());
        }


        exit(EXIT_SUCCESS);
}


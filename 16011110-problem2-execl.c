#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void) {
	pid_t pid;

	if((pid=fork())<0) 
		perror("fork() error");
	else if(pid==0) {
		execl("/bin/ls","ls","-1",(char *)0);
		return 0;
	}
	else {
		wait((int *)0);
		printf("execl()function exeuction\n");
	}
	
	return 0;
}

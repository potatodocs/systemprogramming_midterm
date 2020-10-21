#include<stdio.h>
#include<stdlib.h>

int global_var=100;
char global_arr[1024];

void func(int arg) {
	printf("stack segment near: %p\n",&arg);
}

int main(int argc, char **argc) {
	char *ptr;
	ptr=malloc(sizeof(char));
	func(100);

	printf("heap segment near : %p\n,ptr);
	printf("BSS segment near : %p\n",global_arr);
	printf("initialized data segment near : %p\n",&global_var);

	return(0);
}

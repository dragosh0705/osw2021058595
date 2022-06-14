# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define BUFSIZE 2048
# define PERM 0644

int main(void) {
	int fd1, fd2, m;
	char buf[BUFSIZE];

	if((fd1=open("input.text", ORDONLY)) < 0 ) {
		perror(""fd1 

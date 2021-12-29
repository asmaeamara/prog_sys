#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(int argc, int * argv []){ 
	char *cmd[] = {"who", "ls", "date","pwd"};
	int i;
	while( 1 ) {
		printf("0=who 1=ls 2=date 3=pwd 4=quitter: ");
		scanf( "%d", &i);
		if(fork() == 0) {
		  /* child */
		  execlp( cmd[i], cmd[i], (char *)0 );
		  printf( "execlp failed\n");
		  exit(1);
		 }else {
		  /* parent */
		  wait( (int *)0 );
		  printf( "child finished\n");
		  }
	} /* while */
	return 0;
} /* main */

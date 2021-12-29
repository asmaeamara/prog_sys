#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void funcmd(){
	char * cmd[] = {"who","ls","date","pwd"};
	int i;
	char a[1];
	printf("0=who 1=ls 2=date 3=pwd autre pour quitter : ");
	scanf("%s",&a);
	sscanf(a,"%d",&i);
	
	if ( i == 0 || i == 1 || i == 2 || i == 3 ){
	    if (fork() == 0){    
	    	execlp(cmd[i],cmd[i],NULL);
	    	printf("excelp failed\n");
	    }else if (fork()== -1){
	    	printf("error");
	    }else{
	    wait((int *)0);
	    funcmd();
	    exit(1);
	    }
	}else{
	    exit(1);	
	}
	exit(-1);
}

int main(int argc, char* argv []){

	funcmd();
	
	exit(0);
}

#include <stdio.h>
#include <string.h>


void run(){
	char line[50];
	
	printf("> ");
	gets(line);
	parseLine(line);
}

int main(int argc, char *argv[]){
	if(argc > 1){
		if(strcmp(argv[1], "run") == 0){
			run();	
		}
	}else{
		printf("Error");
		exit(1);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

// producer

int default_num_runs = 5;
int num_runs;

int main( int argc, char *argv[] ){

	// making program more generic to accept different number of runs from command line
	if ( argc > 1 ) {	
		num_runs = atoi(argv[1]);
	}
	
	else {
		num_runs = default_num_runs;
	}

	// setting up pipe to pass data between producer and consumer

	int pipe_fd[2];

	if ( pipe(pipe_fd) == -1){					// error checking to see if pipe is created correctly or not
		fprintf(stderr,"Error with pipe");
		exit(EXIT_FAILURE);
	}		
	

	// creating producer process

	int producer_pid = fork();

	if ( producer_pid < 0 ) {		//error check to see if process created correctly
		fprintf(stderr,"Producer process creation failed\n");
		exit(1);
	}

	else if (producer_pid == 0 ) {

		printf("Producer process created\n");

	}



	// creating consumer process

	int consumer_pid = fork();

	if ( consumer_pid < 0 ) {		//error check to see if process created correctly
		fprintf(stderr,"Consumer process creation failed\n");
		exit(1);
	}

	else if (consumer_pid == 0 ) {

		printf("Consumer process created\n");
	}



return 0;
}

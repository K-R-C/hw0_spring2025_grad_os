// Author: Kyle Chaisson


#include <stdio.h>


const int stack_max = 100;

int stack[100];

int stack_index = (stack_max - 1);

int fake_null = -1;

// stack grows from highest index (max array index) to lowest index (min array index). Stack grows from bottom to top.

void push(int value){

	stack[ stack_index ] = value;

	printf("pushed %d onto stack at index %d\n",value, stack_index);

	stack_index = stack_index - 1;

	

}


void pop(){

	stack_index = stack_index + 1;

	printf("popped %d from stack at index %d\n",stack[ stack_index ], stack_index);

	stack[ stack_index ] = fake_null;


}


void print_stack(){			// function to represent array vertically as stack is often depicted

	for( int num = 0 ; num < stack_max; num ++){

		printf("%d\n",stack[num]);
	}

}



int main(){

	for(int temp = 0; temp < stack_max; temp ++){  // initializing the stack to be all "null" at the beginning

	stack[temp] = fake_null;

}

	push(1);
	push(1);
	pop();

	
	print_stack();

return 0;
}

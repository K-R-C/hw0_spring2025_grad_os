This repository contains 2 files: hw0_stack.c and hw0_pc.c


Program 2: Stack Program Description

each were compiled on linux using the following commands:

gcc -o stack hw0_stack.c

./stack

gcc -o prod_cons hw0_pc.c

./prod_cons


The stack program uses an array data structure, along with push() and pop() functions for removing values from the array respectively. A stack is a last in first out data structure (LIFO) and this behavior is 
accomplished through the use of the push() and pop() functions to push a value to the top of the stack or pop a value off of the top of the stack. 
int producer_pid = fork();



 Problem 1: Producer Consumer Problem

 I was able to create the producer and consumer processes. I realize that I need to use a pipe to pass data between these processes. I realize that the producer process has to give data to the consumer process and wait for it to finish executing 
 before incrementing it's counter and repeating the process again. I know that I have to use execv() on the child consumer process. I know that I need to do something with the read end and the write end of the pipe. 

 Although I understand all of these components, I had trouble implementing all of them in a way that worked. I have included the code that I do have: hw0_pc.c.

 

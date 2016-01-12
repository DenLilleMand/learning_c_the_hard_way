/* Just a program that allocates some space, 
 * valgrind is a external program that will check 
 * the errors of my program, and tell how much 
 * memory the program allocated, and never released.*/
int memory  = (int*)malloc(1024); 

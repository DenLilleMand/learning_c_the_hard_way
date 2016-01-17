#include <stdio.h>
#include <ctype.h>

/* Telling c that we will be using functions later 
 * in the program, without having to actually define them. This 
 * is called "Forward declaration" and is solveing the chicken or the egg problet solves the chicken-and-egg problem of needing to use a function before you've defined it.
 * ex14.c:8-15m*/
int can_print_it(char ch);
void print_letters(char arg[]);

/* a method that knows how to print the arguments that the program usually get */
void print_arguments(int argc, char *argv[])
{
  for(int i = 0; i < argc; i++) {
    print_letters(argv[i]);
  }
}


/* A method that knows how to  */
void print_letters(char arg[])
{
  for(int i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}


int can_print_it(char ch) 
{
  /* These methods are gained through ctype.h .
   *  isAplhabetic checks whether the character is 
   *  part of the alphabet. while isblank checks whether 
   *  the character is a space ' ' or a horizontal tab '\t'
   * */
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}

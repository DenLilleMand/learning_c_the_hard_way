#include <stdio.h>

int main(int argc, char *argv[]) 
{
  int age = 10;
  int height = 72;

  printf("I am %d years old. \n", age);
  printf("I am %d tall . \n", height);

  /* extra assignment, finding escape codes that can be used by printf, applyable to other 
   * programming languages aswell.*/

  /* quotes inside of quotes */
  printf("\" \n");
  /* just a backslash */
  printf("\\ \n");
  /* Alert, but what is a alert?*/
  printf("\a \n");

  /* backspace */
  printf(" \b  \n");


  /* escape */
  printf(" \e  \n");

  /* form feed */
  printf(" \f  \n ");

  /* new line */
  printf(" \n ");

  /* carriage return */
  printf(" \r  \n ");

  /* horizontal tab */
  printf(" \t  \n ");

  /* vertical tab */
  printf(" \v \n ");

  /* a single % */
  printf(" %% \n");


  /* a different kind than escape formats:  format sequences: */

  /* digit */
  printf("This is a digit: %d", 50);

  /* float */
  printf("this is a float: %f ", 50.505005);

  /* float with scientific notation */
  printf(" this is a float with scientific notation: %e", 1.86e6);

  printf(" like 'e' but with capital E as the output: %E", 1.86E6);

  /* g, Use shorter of the two representations: f or e, a recommendation is too allways use g, because it will usually do what we want */
  printf("g can aparently be used instead of f or e, and uses the one we want: %g", 50.00);

  return 0;
}

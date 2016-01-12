#include<stdio.h>
/** http://c.learncodethehardway.org/book/ex8.html */

int main(int argc, char *argv[])
{
  /* There is so many ways to use arrays in c, 
   * the way we declare them right is 'type name[] = {initializer};. 
   * When c has to run this code what it does is:
   * 1.Look at the type, in this first case its int 
   * 2.Look at the [] and see that there's no length given.
   * 3.Look at the initializer, {10, 12, 13, 14, 20} and figure out that you want those 5 ints in your array.
   * 4.Create a piece of memory in the computer, that can hold 5 integers one after another.
   * 5.Take the name you want, areas and assign it this location.
   * */
  int areas[] = { 10, 12, 13, 14, 20 };

  /* the following 2 ways of declareing a char array,
   * is the same for c, the funny thing is when we print the size of this string,
   * we will get 4. And thats because the way c represents a string, is a char on each index,
   * and then ending it with a (nul) byte which looks like this: '\0' */
  char name[] = "Zed";
  char full_name[] = {
    'Z', 'e', 'd', ' ', 'A', '.', ' ',
    'S', 'h', 'a', 'w', '\0'
  };

  /** WARNING: on some systems you may have to change the %ld in this code to
   * a %u since it will use unsigned ints(my system is one of those, but why??)*/
  printf("The size of an int: %u\n", sizeof(int));

  /** the sizeof tells us how many bytes things are. */

  printf("The size of areas (int[]): %u\n", sizeof(areas));

  /* This is a insane way of finding out how many things that are in an array(because the sizeof(areas)
   * gives us the size of 5 integers divided by sizeof(int) which is 1 integer, it gives us 5. 
   * but the question is if we would get some decimal numbers out, if we tried to print a float. 
   * because you'd think the the array container would be a couple of bytes aswell, but then again, 
   * maybe the sizeof() method when given an array knows that it should only output the contents.: */
  printf("The number of ints in areas: %u\n", sizeof(areas) / sizeof(int));

  printf("The first area is %d, the 2nd %d. \n", areas[0], areas[1]);

  printf("The size of a char: %u\n", sizeof(char));

  printf("The size of name (char[]): %u\n", sizeof(name));
  
  printf("The number of chars %u\n", sizeof(name) / sizeof(char));

  printf("The size of full_name (char[]): %u\n", sizeof(full_name));

  printf("The number of chars: %u\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  areas[0] = 100;
  name[0] = 'A';
  full_name[2] = 'Z';

  /* so this is kind of funny, setting a char to a array with ints works,
   * because it casts the chars ascii value into the array. */
  areas[0] = 'A';

  for(int i = 0; i < (sizeof(areas) / sizeof(int)); i++) {
    printf("%d \n", areas[i]);
  }
  printf("name: %s \n", name);
  printf("full  name: %s \n", full_name);

  return 0;
}

#include<stdio.h>
/* Bottom of this file has a pretty interesting conclusion */

int main(int argc, char *argv[])
{
  /* what to learn from this??? that integer arrays 
   * will fill up the last spots of an array with zero's, so 
   * when we declare an array with the size 4 and only put one number 
   * in it, it will fill up the remaining places with zeros aswell.*/
  
  int numbers[4] = {0};
  int other_numbers[4] = {};
  /* Char arrays are different than number arrays, because they dont fill up the remaining 
   * indexes of the array. But, what happens underneath the hood is that it actually fills in the indexes
   * with 0, but the nul byte ('\0') is actually special in the sense that it terminates the string effectively ,
   * and doesn't display the rest. I know its not explained in full if all of the indexes are filled with nul bytes,
   * or if they're regular zeroes followed by a null byte or if the nul byte terminates the string before the zeroes can be 
   * printed. Im not sure how much it matters, but its a question mark atleast, i wonder how to find out.
   * */
  /* This is by the way one of the two ways to declare a string, the one is showed below somewhere */
  char name[4] = {'a'};

  /* on another note, c strings are hard to get right, because can actually miss out on the 
   * nul byte, a example of this would be the following(not enough space for the nul byte, and it actually 
   * just gives a warning): */
  char love[4] = {'l', 'o', 'v', 'e'};

  /* Yet another way is to overwrite just the very last location of the array, where 
   * the nul byte resides*/
  /*char name[3] = 'M';*/

  //first, print them out raw
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  printf("Name: %s\n", name);

  /*setup the numbers*/
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  /* Setup the name */
  name[0] = 'Z';
  name[1] = 'e';
  name[2] = 'd';
  name[3] = '\0';

  /* Then print them out initialized */
  printf("Numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

  printf("Name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

  /* Print the name like a string */
  printf("Name %s\n", name);
  
  /* this is another way to use string. And it is actually the preferred way of doing it,
   * compare to the previous one. This is the way we should initialize string literals. The 
   * thing is that its basically the same thing, but this way is more idomatic and easier to write.*/
  char *another = "Zed";

  printf("Another: %s\n", another);

  printf("Another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

  other_numbers[0] = 1;
  other_numbers[1] = 2;
  other_numbers[2] = 3;
  other_numbers[3] = name[0];
  printf("Characters as numbers: %d %d %d %d\n", love[0], love[1], love[2], love[3]);
  printf("Number array with a char in it: %d %d %d %d", other_numbers[0], other_numbers[1], other_numbers[2], other_numbers[3]);

  /*Well this is funny, printing out numbers as characters gives us the ASCII equivalent. */
  love[0] = 88;
  love[1] = 70;
  love[2] = 90;
  printf("The love character array, being ruined by numbers: %c %c %c %c \n", love[0], love[1], love[2], love[3]);




  /* how can this char array only be 4 bytes long??, which is the same size as a simple int, how might 
   * we benefit from this????*/
  char *what_is_the_size_of_a_char_array = "hahahahhahahahahahahahahhahahahahahahahahahsdhahahahahahahahahahahahahahhah";
  printf("How many bytes is a character array, it must surely depend on the size? %d\n", sizeof(what_is_the_size_of_a_char_array));

  int regular_int = 5;
  printf("How many bytes is a reguar int? %d\n", sizeof(regular_int));


  /* What happens when we write out an entire char array to a integer? :) */
  printf("Printing out an entire char array as a integer: %d \n", what_is_the_size_of_a_char_array);

  /* The reason why this is interesting, the part about one char array being the same size as a integer, is because that means we can contain several char arrays in a 
   * single array right? because if the number can fit, then the char array surely can aswell. */

  return 0;
}

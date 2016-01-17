#include<stdio.h>

/*A lexicon for reading/understanding pointers
 *
 * type *ptr = "A pointer of type named ptr"
 *
 * *ptr = "The value of whatever ptr is pointed at"
 *
 * *(ptr + i) = "The value of (whatever ptr is pointed at plus i)"
 *
 * &thing = "The address of thing"
 *
 * type *ptr = &thing = "A pointer of type named ptr set to the address of thing"
 *
 * ptr++ = "Increment where ptr points"
 */

int main(int argc, char *argv[])
{
  int i = 0;
  /* Processing commandline arguments with pointers */
  for(i = 0; i < argc; i++) {
    printf("Cmd line arguments: %s\n", *(argv+i));
  }

  int ages[] = {10, 20, 30, 40, 5};

  /* Evidence that the pointer to a array is the exact same address 
   * as the first index of the array*/
  printf("The address of the ages array: %p\n", &ages);
  printf("The address of index 0 inside of the ages array: %p\n", &ages[1]);
  printf("The address of index 1 inside of the ages array: %p\n", &ages[1]);
  char *names[] = {
    "Alan", "Frank", "Mary", "John", "Lisa"
  };

  //safely get the size of ages
  int count = sizeof(ages) / sizeof(int);
  //first way using indexing
  for(i = 0; i < count; i++) {
    /* pointers: */
    printf("%s is  %d years old. \n", *(names + i), *(ages + i));
    /* same with array: */
    printf("%s is  %d years old. \n", names[i], ages[i]);
  }


  printf("---\n");

  // setup the pointers 
  int *cur_age = ages;
  /* Createing a pointer that points to names, char * is allready a pointer to char,
   * we need to go one level further though because names is two dimensional which leads
   * us to char **  for a "pointer to (a pointer to char)*/
  char **cur_name = names; 


  /* The tutorial says that pointers are just arrays, 
   * which is why it says that useing a regular index like above
   * is one way to use pointers. The next ways to use pointers are kind of weird,
   * e.g. *(cur_name+i)  is aparently the same as names[i], it allso has something do 
   * to with the way the computer saves it in its memory, like the switch statement 
   * if we said that the switch statement was represented by a 'Y' in memory, then a case 'k' would be looking
   * at the location Y+k  which is why it looks kind of similar with the cur_name+i, the way
   * we have to read this expression is  "The value of(point cur_name plus i)"
   * */

  /* This allso means that c looks at the computer as one big array of bytes, 
   * so if we have a array with a variable name, that variable name is a address/index in this 
   * huge array, and it points directly to the beginning of the sequence in the memory.
   * */

  /* so what c does: 
   * Creates a block of memory inside of my computer, 
   * pointing the name of the variable, in this case "names" 
   * to the beginning of that block. "Indexing" into the block 
   * by takeing the base address of "names" and gets the element
   * that is "i" away from there. Converting that address of 
   * names+i into a valid int or char of the right size, such that the index works to return what you want: the index at i.
   * */


  //second way using pointers
  for(i = 0; i < count; i++) {
    /* pointers */
    printf("%s is %d years old. \n", *(cur_name+i), *(cur_age+i));
    /* same with arrays: */
    printf("%s is %d years old. \n", cur_name[i], cur_age[i]);
  }


  printf("---\n");

  //third way, points are just arrays
  for(i = 0; i < count; i++) {
    /* Array: */
    printf("%s is %d years old again.\n", cur_name[i], cur_age[i]);
    /* pointers */
    printf("%s is %d years old again.\n", *(cur_name+i), *(cur_age+i));
  }

  printf("---\n");

  // fourth way with pointers in a stupid complex way
  for(cur_name = names, cur_age = ages; (cur_age - ages) > count; cur_name++,cur_age++) {
    printf("%s lived s also applies to full timers, just make a WORK: tag with your message."  \
	" %d years so far. \n", *cur_name, *cur_age);
  }

  return 0;
}

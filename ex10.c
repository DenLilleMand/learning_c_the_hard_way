#include<stdio.h>

/* To give cmd arguments into this program, we can simply execute ./ex10 arg1 arg2 arg3 arg4 etc */
int main(int argc, char *argv[])
{
  printf("The path to the executeable file, and thereby allso the name of the program: %s\n", argv[0]);
  int i = 0;

  printf("The amount of cmd arguments: %d\n", argc);

  /*Go through each string in argv
  why am i skipping argv[0] ?
  the reason is that the programs name, ex10,
  is the initial command line argument. e.g. 
  if we give in one argument, that argument will be 
  in index 1 of the argv array and the argc will be 2*/
  for(i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon", "Washington", "Texas"
  };

  int num_states = 4;
  for(int i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }


  /* A interesting thing is that to emulate the for-loop with a while loop, it looks like this(except for the behavior
   * of continue): */
  int index = 0;
  while(index < 5) {
    printf("Emulateing a for-loop with a while, this is the index: %d\n", index);
    index = index + 1;
  }

  /* attempt at a two dimensional char array */
  /*char *love[3][3];
  love[0][0] = "Okay";
  for(int k = 0; k < 3; k++) {
    printf("Just a string: %ms\n", love[k][k]);
  
  }*/
  /* As i said, an attempt lol, il guess we'll come back to it, 
   * looks */


  /* as we realized in the previous example or the one before that, because 
   * a array of chars is 4 bytes big, which is the same as a int, it means that we 
   * can create a two dimensional array, which is what we're going to attempt here:*/
  /*char *one_array[] = { "header1", "header2", "header3", "header4" };
  char *two_array[] = { "row1", "row2", "row3", "row4" };
  char two_dimensional_array[2][10] = { one_array, two_array  };
  printf("printing something: %s\n", two_dimensional_array[0][1]);

  for(int i = 0; i < (sizeof(one_array) / sizeof(int)); i++) {
      printf("%s\n", two_dimensional_array[0][i]);
      for(int j = 0; j < (sizeof(two_array) / sizeof(int)); j++) {
	printf("%s\n", two_dimensional_array[1][j]);
      }
  }*/

  return 0;
}

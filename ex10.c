#include<stdio.h>

int main(int argc, char *argv[])
{
  printf("The path to the executeable file, and thereby allso the name of the program: %s\n", argv[0]);
  int i = 0;

  /*Go through each string in argv
  why am i skipping argv[0] ?
  the reason is that the programs name, ex10,
  is the initial command line argument. e.g. 
  if we give in one argument  */
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

  return 0;
}

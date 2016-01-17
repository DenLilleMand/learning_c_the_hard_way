#include<stdio.h>

int main(int argc, char *argv[])
{
  /**Go through each string in argv
  while i < argc, doesn't return a boolean,
  but returns either 0 or 1*/
  int i = 0;
  while(i < argc) {
    printf("arg %d: %s\n",i, argv[i]);
    i++;
  }

  //let's make our own array of strings
  char *states[] = {
    "California", "Oregon", "Washington", "Texas"
  };

  int num_states = 4;
  i = 0;
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  char *cakes[] = {
    "chocolate cake", "raspberry cake", "layered cake"
  };
  i = 3;
  while(0 < i) {
    printf("Cake on index %d is: %s\n", i, cakes[i]);
    i--;
  }

  /* the following is a copying assignment, whats interesting 
   * about this is to make a while loop that uses the argc and argv variables,
   * and another thing that should be interesting to look into is if we actually copy
   * the values or if its just a pointer.*/
  i = 0;
  char *copied_args[argc];
  while(i < argc ) {
    if(argv[i]) {
      copied_args[i] = argv[i];
      printf("Copied value: %s\n", copied_args[i]);
    }
    i++;
  }

  for(int j = 0; j < argc; j++) {
    printf("The value i copied earlier %s\n", copied_args[j]);
  }

  /* So lets look into if we copied the entire object or just copied the pointer */
  copied_args[1] = "something new";
  printf("Has the value changed? if it has, it should be equal \"Something new\" : %s \n",argv[1]);
  /* Seems like we really copied it, but is this true or did we make a mistake?? */
  
  return 0;
}

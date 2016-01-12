#include<stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;
  /** unsigned makes the range go from 0 to aprox 4 billion, but it cannot contain 
   * negative numbers. If we use a regular long it can contain 2 billion negative and positive numbers, split 50/50. If we changed the last number multiplied from 2008L to 2048L, it would throw a warning. 
   * And if we moved it to a regular(signed) long, it would give a warning much earlier, around 1000. */
  /* unsigned */long universe_of_defects = 1L * 1024L * 1024L * 2008L;
  double expected_bugs = bugs * bug_rate;
  double part_of_universe = expected_bugs / universe_of_defects;
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;

  printf("You have %d bugs at the imaginary rate of %f. \n", bugs, bug_rate);

  printf("The entire universe has %ld bugs.\n", universe_of_defects);


  printf("You are expected to have %f bugs. \n", expected_bugs);

  printf("That is only a %e portion of the universe. \n", part_of_universe);

  //This makes no sense, just a demo of smt weird
  printf("Which means you should care %d%%.\n", care_percentage); 
  return 0;
}

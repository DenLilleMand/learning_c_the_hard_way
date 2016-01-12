#include<stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  /* notice the single quote for char */
  char initial = 'A';
  /* double quote for string */
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  /* d is digit */
  printf("You are %d miles away. \n", distance);
  /* f is float */
  printf("You have %f levels of power.\n", power);
  /* f is float */
  printf("You have %f awesome super powers.\n", super_power);
  /* c is a single char */
  printf("I have an initial %c.\n", initial);
  /* string(array of chars) */
  printf("I have a first name %s. \n", first_name);
  /* string(array of chars) */
  printf("I have a last name %s. \n", last_name);
  /* s for string, c for char */
  printf("My whole name is %s %c. %s. \n", first_name, initial, last_name);


  return 0;
}

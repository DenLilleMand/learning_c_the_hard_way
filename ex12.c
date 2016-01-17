#include<stdio.h>

int main(int argc, char *argv[])
{
  if(argc == 1) {
    printf("You only have one argument. You suck. \n");
  } else if(argc > 1 && argc < 4) {
    printf("Here is your arguments:");
    for(int i = 0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
    printf("\n");
  } else {
    printf("%d is too many arguments", argc);
  }
  return 0;
}

#include<stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2) {
    printf("ERROR: You need one argument.\n");
    return 1;
  }

  for(int j = 1; j < argc; j++) {
    for(int i = 0; argv[j][i] != '\0'; i++) {
      char letter = argv[j][i];

      if(letter >= 65 && letter <= 90) {
	letter = letter + 32;
      }

      switch(letter) {
	case 'a':
	  printf("%d: 'a'\n", i);
	  break;
	case 'e':
	  printf("%d: 'e'\n", i);
	  break;
	case 'i':
	  printf("%d: 'i'\n", i);
	  break;
	case 'o':
	  printf("%d: 'o'\n", i);
	  break;
	case 'u':
	  printf("%d: 'u'\n", i);
	  break;
	case 'y':
	  if(i > 2) {
	    // it's only sometimes Y
	    printf("%d: 'y'\n", i);
	  }
	  break;
	default:
	  printf("%d: %c is not a vowel\n", i, letter);
      }


      //if else alternative to switch for comparison
      if(letter == 'a') {
	printf("%d: 'a'\n", i);
      } else if(letter == 'e') {
	printf("%d: 'e'\n", i);
      } else if(letter == 'i') {
	printf("%d: 'i'\n", i);
      } else if(letter == 'o') {
	printf("%d: 'o'\n", i);
      } else if(letter == 'u') {
	printf("%d: 'u'\n", i);
      } else if(letter == 'y') {
	if(i > 2) {
	  //it's only sometimes y
	  printf("%d: 'y'\n", i);
	}
      } else {
	printf("%d: %c is not a vowel\n", i, letter);
      }
    }
  }
  return 0;
}

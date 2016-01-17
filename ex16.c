/* standard input output */
#include<stdio.h>
/* Gives us an assert function, which prints a error and stops 
 * the program if the expression is 0*/
#include<assert.h>
/* gives us malloc and free */
#include<stdlib.h>
#include<string.h>

/* 
 * Things i never got to solve in this example: 
    How to create a struct on the stack, which means just like you've been making any other variable.
    How to initialize it using the x.y (period) character instead of the x->y syntax.
    How to pass a structure to other functions without using a pointer. 

*/

/* Asteriks and ambersand uses are very nicely explained at 
 * http://stackoverflow.com/questions/2094666/pointers-in-c-when-to-use-the-ampersand-and-the-asterisk
 *  
 *
 *  Basically what it says is that:
 *  int* p; //variable p is pointer to integer type
 *  int i;  //is a value
 *
 *  To turn the p pointer into a value we could do:
 *  int i2 = *p; //so the asteriks is a way of getting the value of a pointer
 *
 *  While to get a pointer to a value we have to do(notice the asteriks after the int):
 *  int* p2 = &i;
 */

/* creates a structure Person with 4 variables */
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

/* interesting is that the following struct dont need a semicolon at the end,
 * while the previous one did, but i suppose its because this is a 
 * struct that returns something, while the other one is declaration*/
struct Person *Person_create(char *name, int age, int height, int weight) 
{
/* Here we allocate the size of the person struct, 
 * a reason why we would use manual allocation of a speicfic size,
 * would be to make sure that we dont run out of space while 
 * trying to allocate further space by doing it dynamically instead. 
 * Now we have the oportunity to handle the bug before we fill up the rest of the memory 
 * with a half valid person struct*/	
  struct Person *who = malloc(sizeof(struct Person));
  /* Like in other runtimes we can set the severity of a assert statement 
   * through env variables*/
  assert(who != NULL);

  /* The arrow function is just short of (*who).name */
  who->name = strdup(name);
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}


void Person_destroy(struct Person *who)
{
  assert(who != NULL);
  /* uses the free function from the stdlib.h, which deallocates the space that malloc allocated,
   * i think its kind of crazy that it even deallocates the inidividual values before the struct,
   * there has to be a easier way you'd think*/
  /* if we dont free up the who->name we will get a memory leak with valgrind, so 
   * aparently it is nessecery*/
  free(who->name);
  free(who);
}

/* Simple method that takes a pointer to a struct person, 
 * and prints out all of the values*/
void Person_print(struct Person *who)
{
  printf("Name: %s\n", who->name);
  /* \t = Horizontal tab */
  printf("\tAge: %d\n", who->age);
  printf("\tHeight: %d\n", who->height);
  printf("\tWeight: %d\n", who->weight);
}


int main(int argc, char *argv[])
{
  //Make two people structures
  struct Person *joe = Person_create("Joe Alex", 32, 64, 140);
  struct Person *frank = Person_create("Frank Blank", 20, 72, 180);
  
  //Print them out and where they are in memory
  printf("Joe is at memory location: %p\n", joe);
  Person_print(joe);

  printf("Frank is at memory location: %p\n", frank);
  Person_print(frank);


  frank->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  // Destroy them both so we can clean up
  Person_destroy(joe);
  Person_destroy(frank);
  /* makes the program abort(As long as our make file uses the -g option with the CFLAGS): */
//  Person_destroy(NULL);

  return 0;
}

#can call 'make clean all', so we can chain the 
#commands after eachother like that.
CFLAGS=-Wall -g -std=c11



all: ex1 ex3 ex4 ex5 ex6 ex7 ex8 ex9 ex10

clean: 
	rm -f ex1
	rm -f ex3
	rm -f ex4
	rm -f ex5
	rm -f ex6
	rm -f ex7
	rm -f ex8
	rm -f ex9
	rm -f ex10
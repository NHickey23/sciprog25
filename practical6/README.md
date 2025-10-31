## Practical 6

This folder contains the files main.c and mm.c, as well as Makefile, which compiles main.c and mm.c

## Compile

* make all. If something goes wrong, "make clean" will remove the .o files, and make all can be tried again

* alternatively
gcc -c main.c
gcc -c mm.c
gcc -o matmultc main.o mm.o -lm

## Execute

* ./matmultc

## Output

 This is matrix A

  0  1  2
  1  2  3
  2  3  4
  3  4  5
  4  5  6

 This is matrix B

  0 -1 -2 -3
  1  0 -1 -2
  2  1  0 -1

 This is matrix C

  6  3  0 -3
  9  6  3  0
 12  9  6  3
 15 12  9  6
 18 15 12  9


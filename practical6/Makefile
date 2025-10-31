CC = gcc # C compiler
CCFLAGS = -O3 #Compiler flag, optimize for speed
LDFLAGS = -lm #Linking flags; link maths library

all: matmultc

matmultc: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS) 

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<

clean:
	rm *.o

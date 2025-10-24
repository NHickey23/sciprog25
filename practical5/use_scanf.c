#include <stdio.h>
int main(void) {
	int i;
	double a;
	int ierr;

	//Enter information from user
	printf("Enter an int and a double\n");
	
	ierr = scanf("%d %lf", &i, &a); //& is the address of the two values
	if(ierr !=2) printf("Problem with the input\n");
	return 0;

}

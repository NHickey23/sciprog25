#include<stdio.h>
#include<math.h>

int main(){
	
	int N = 12, i;

	//x0 = a,  x12 = b_deg
	
	float a = 0.0, b_deg = 60.0;

	float b_rad, area, mult_rad;

	//convert b in degrees (b_deg) = pi/3 to radians
	b_rad = (M_PI * b_deg)/180.0;
        printf("pi/3 in radians = %f\n", b_rad);

	//Sum tan(a) + tan(b)	
	area = tan(a) + tan(b_rad);
	printf("Initial area: f(x0) + f(x12) = %f\n", area);

	//Calculate f(x1) + f(x2), ...... + f(x11), where i should be less than 60, so i will go from 5(x1) to 55(x11)
	for(i = 5; i < 60; i=i+5) {                  
		area = area + 2*tan((M_PI*i)/180.0);
		printf("New area at x(%d) = %f\n", i/5, area);

	}	

	// Multiply the area by (pi/3)/2*12, this is to finish off b-a/2N, and to put the answer back into radians
	mult_rad = (M_PI * ((b_deg - a)/(2*N)/180.0));
	area = mult_rad * area;

	//Approximated result
	printf("\nTrapezoidal result: %f\n", area);

	//Actual result
	printf("Real result: %f\n", log(2.0));

	return 0;




}	

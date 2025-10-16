#include <stdio.h>
#include <math.h>

#define N 12                                                                     //macro
float TanArr[N+1];                                                               //global define

float degtorad(float degang);                                                    //declares function to change degrees to radians
float traprule();                                                                //declares function to calculate area under curve

int main(void){

	int i;

	float deg, rad, area;                                                    //declaring all floats, TanArc needs to be N+1 due to C counting from 0 to 12  

	//f(xi) at xi where i=0,...., 12
	for (i=0; i<=N; i++){
	     deg = i*5.0;		                                         //because it's 0 degrees to 60 in steps of 5
	     rad = degtorad(deg);	 
	     TanArr[i] = tan(rad);
	     printf("TanArr[%d]=%f\n", i, TanArr[i]);
	}
	
	area = traprule();
	
	//Approximated rule
	printf("\nTrapezodial result: %f\n", area);
	
	//Actual Result
	printf("Real result: %f\n", log(2.0));
	
	return 0;
}

float degtorad(float degang){                                                    //degtorad function
	return((M_PI*degang)/180.0);
}

float traprule(){                                                                //traprule function
	
	float area;
	int i;

	area=TanArr[0]+TanArr[N];
	for (i=1; i<N; i++) {                                                    //this goes from x1 to xn-1
		area=area+2.0*TanArr[i];
	}

	float mult_rad=degtorad((60.0-0.0)/(2*N));
	area=mult_rad*area;
	
	return area;

}









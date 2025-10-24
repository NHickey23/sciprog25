#include <stdio.h>
#include <math.h>

double arctanh1(const double x, const double delta);
double arctanh2(const double x);

int main(){
    
    double delta, x;
    printf("Enter delta value \n");  //precision function
    scanf("%lf", &delta);

    int length=1000;
    double tan1[length];
    double tan2[length];

    x=-0.9; //x must be between -1 and 1
    int j=0; //array index
    while(x<=0.9 && j<length){
    tan1[j] = arctanh1(x, delta);
    tan2[j] = arctanh2(x);
    printf("Difference at %lf is %.10lf\n", x, fabs(tan1[j]-tan2[j]));
    j++;
    x=x+0.1; //increment x by 0.1 until x is less than or equal to 0.9
    }

    return 0;
}

//Inverse hyperbolic tangent approximation

double arctanh1(const double x, const double delta){
	double arcTan = 0; //approximated
	double elem, val;
	int n=0;

	do{
	   val=2*n+1;
	   elem=pow(x, val)/val;
	   arcTan += elem; //arcTan=arcTan + elem;
	   n++;            //to increment as it's a summation formula
	} while(fabs(elem) >= delta);

	return arcTan;
}
//Real Value arctanh

double arctanh2(const double x){
	return ((log(1+x)-log(1-x))/2);
}

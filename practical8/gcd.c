//Iterative and recursive versions of EUclid's algorithm to calculate the gcd of two positive integers

#include<stdio.h>

int iterativeGCD(int a, int b){                                           //writes the iterative version of the algorithm
    
    int temp;
    while(b!=0){
	 temp=b;
	 b=a%b;
	 a=temp;
    }

    return a;
}

int recursiveGCD(int a, int b){                                           //writes the recursive form of the algorithm
    if (b==0){
        return a;
    }
    else{
	 return(recursiveGCD(b, a%b));
    }
}

int main(){
    int a, b, error;                                                      //initialise a b and the error as integers

    printf("Please input two positive integers:\n");                      //asks for 2 positive integers
    error=scanf("%d %d", &a, &b);
    if (error !=2){
       printf("Please enter two integers.\n");                            //checks that you have given 2 integers
       return 1;
    }
    if (a<=0 || b<=0 ) {                                                  //checks that they are both positive
       printf("These numbers are not positive!\n");
       return 1;
    } 
    //Call the function
    printf("Iterative GCD(%d.%d)%d\n", a, b, iterativeGCD(a,b));          //calls iterative function, takes in a and b, does function and then prints the value
    printf("Recursive GCD(%d.%d)%d\n", a, b, recursiveGCD(a,b));          //calls recursive function, takes in a and b, does function and then prints the value 

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

//Function prototype
//Input arguments: Fn-1 and Fn-2
//Output arguments: Fn and Fn-1
void fibonacci(int *a, int *b);

int main()
{
  int n, i;
  int f1=1, f0=0;

  //Get user to enter a number
  printf("Enter a positive integer\n");
  scanf("%d", &n);

  //Check if the number is positive
  if(n<1){
     printf("The number is positive\n");
     exit(1);
  }
  
  printf("Fibonacci sequence is: \n");
  printf("%d, %d, ", f0,f1);

  for(i=2;i<=n;i++){
	  fibonacci(&f1,&f0);  //updating variables using address, these are the new values in the fibonacci sequence
	  printf("%d, ", f1);
	  if ((i+1)%10 ==0)
	     printf("\n");
	}
  return 0;
}

void fibonacci(int *a, int *b){ //fibonacci definition
	
     int next;
     //a=Fn-1, b=Fn-2
     next=*a+*b;

     //On exit
     *b=*a;
     *a=next;
     
}

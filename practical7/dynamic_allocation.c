#include <stdio.h>
#include <stdlib.h>

//Allocate array function
int *allocatearray(int n){
    int *p;
    p=(int *) malloc(n*sizeof(int));
    return p;
}

//Fill with ones function
void fillwithones(int *array, int n){
     int i;
     for(i=0; i<n; i++){
	array[i]=1;
     }
}
//Print array function
void printarray(int *array, int n){
     int i;
     for(i=0; i<n; i++){
	printf("a[%d]: %d\n", i, array[i]);
     }
}

//Deallocate array function
void freearray(int *array){
     free(array);
}

int main(){
    
    int n, *a;
    printf("Size of the array: \n");
    scanf("%d", &n);

    a=allocatearray(n);                     //call allocate array function
    fillwithones(a, n);                     //call fill with ones function
    printarray(a, n);                       //call print array function
    freearray(a);                           //call deallocate array

    a=NULL;                                 //make sure a doesn't have a leftover value


 return 0;
}

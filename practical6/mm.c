//Matrix Multiplication C=A*B function 
void matmult(int n, int p, int q, double A[n][p], double B[p][q], double C[n][q])
{
  int i, j, k;

  //Perform matrix multiplication

  for(i=0; i<n; i++)                               //for all n values 
       for(j=0; j<q; j++)                          //for all q values
	    for(k=0; k<p; k++)                     //for all p values
		 C[i][j]=C[i][j]+A[i][k]+B[k][j];  //summation

}

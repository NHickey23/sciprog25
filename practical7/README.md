## Practical 7

This folder contains the files finde.c and dynamic_allocation.c. Finde computes the value of e given an polynomial order, and compares it to the given value of e. 
Dynamic allocation practises basic c pointers and dynamic memory allocation.

## Compile

* For finde.c
gcc finde.c -o finde -lm

* For dynamic allocation
gcc dynamic_allocation.c -o dynamic_allocation

## Execute

* For finde.c
./finde

* For dynamic allocation
./dynamic_allocation

## Input

* For finde.c
Enter the required polynomial order: 

* For dynamic allocation
Size of the array:

## Output
* For finde.c

Enter the required polynomial order: 
15
e term for order 1 is 1.00000000000000 
e term for order 2 is 0.50000000000000 
e term for order 3 is 0.16666666666667 
e term for order 4 is 0.04166666666667 
e term for order 5 is 0.00833333333333 
e term for order 6 is 0.00138888888889 
e term for order 7 is 0.00019841269841 
e term for order 8 is 0.00002480158730 
e term for order 9 is 0.00000275573192 
e term for order 10 is 0.00000027557319 
e term for order 11 is 0.00000002505211 
e term for order 12 is 0.00000000208768 
e term for order 13 is 0.00000000051758 
e term for order 14 is 0.00000000078189 
e term for order 15 is 0.00000000049892 
e is estimated as 2.7182818301, with difference 1.625527e-09


It should be noted that for higher polynomials than 15, the difference between calculated e and the inbuilt e will get bigger. 
This is due to integer overflow, which happens when the result of an integer operation does not fit within the allocated memory space.

Enter the required polynomial order: 
20
e term for order 1 is 1.00000000000000 
e term for order 2 is 0.50000000000000 
e term for order 3 is 0.16666666666667 
e term for order 4 is 0.04166666666667 
e term for order 5 is 0.00833333333333 
e term for order 6 is 0.00138888888889 
e term for order 7 is 0.00019841269841 
e term for order 8 is 0.00002480158730 
e term for order 9 is 0.00000275573192 
e term for order 10 is 0.00000027557319 
e term for order 11 is 0.00000002505211 
e term for order 12 is 0.00000000208768 
e term for order 13 is 0.00000000051758 
e term for order 14 is 0.00000000078189 
e term for order 15 is 0.00000000049892 
e term for order 16 is 0.00000000049895 
e term for order 17 is -0.00000000346594 
e term for order 18 is -0.00000000111305 
e term for order 19 is 0.00000000912062 
e term for order 20 is -0.00000000047571 
e is estimated as 2.7182818346, with difference 6.190403e-09

Enter the required polynomial order: 
50
e term for order 1 is 1.00000000000000 
e term for order 2 is 0.50000000000000 
e term for order 3 is 0.16666666666667 
e term for order 4 is 0.04166666666667 
e term for order 5 is 0.00833333333333 
e term for order 6 is 0.00138888888889 
e term for order 7 is 0.00019841269841 
e term for order 8 is 0.00002480158730 
e term for order 9 is 0.00000275573192 
e term for order 10 is 0.00000027557319 
e term for order 11 is 0.00000002505211 
e term for order 12 is 0.00000000208768 
e term for order 13 is 0.00000000051758 
e term for order 14 is 0.00000000078189 
e term for order 15 is 0.00000000049892 
e term for order 16 is 0.00000000049895 
e term for order 17 is -0.00000000346594 
e term for order 18 is -0.00000000111305 
e term for order 19 is 0.00000000912062 
e term for order 20 is -0.00000000047571 
e term for order 21 is -0.00000000083674 
e term for order 22 is -0.00000000191309 
e term for order 23 is 0.00000000115948 
e term for order 24 is -0.00000000128875 
e term for order 25 is 0.00000000048165 
e term for order 26 is -0.00000000053941 
e term for order 27 is 0.00000000067350 
e term for order 28 is -0.00000000072689 
e term for order 29 is -0.00000000080547 
e term for order 30 is 0.00000000070958 
e term for order 31 is 0.00000000135465 
e term for order 32 is -0.00000000046566 
e term for order 33 is -0.00000000046566 
e term for order 34 is inf 
e term for order 35 is inf 
e term for order 36 is inf 
e term for order 37 is inf 
e term for order 38 is inf 
e term for order 39 is inf 
e term for order 40 is inf 
e term for order 41 is inf 
e term for order 42 is inf 
e term for order 43 is inf 
e term for order 44 is inf 
e term for order 45 is inf 
e term for order 46 is inf 
e term for order 47 is inf 
e term for order 48 is inf 
e term for order 49 is inf 
e term for order 50 is inf 
e is estimated as inf, with difference inf

* For dynamic allocation

Size of the array: 
5
a[0]: 1
a[1]: 1
a[2]: 1
a[3]: 1
a[4]: 1

Size of the array: 
10
a[0]: 1
a[1]: 1
a[2]: 1
a[3]: 1
a[4]: 1
a[5]: 1
a[6]: 1
a[7]: 1
a[8]: 1
a[9]: 1

Size of the array: 
15
a[0]: 1
a[1]: 1
a[2]: 1
a[3]: 1
a[4]: 1
a[5]: 1
a[6]: 1
a[7]: 1
a[8]: 1
a[9]: 1
a[10]: 1
a[11]: 1
a[12]: 1
a[13]: 1
a[14]: 1
 
Size of the array: 
20
a[0]: 1
a[1]: 1
a[2]: 1
a[3]: 1
a[4]: 1
a[5]: 1
a[6]: 1
a[7]: 1
a[8]: 1
a[9]: 1
a[10]: 1
a[11]: 1
a[12]: 1
a[13]: 1
a[14]: 1
a[15]: 1
a[16]: 1
a[17]: 1
a[18]: 1
a[19]: 1


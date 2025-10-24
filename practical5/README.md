## Practical 5

This folder contains the files use_scanf.c, which reads in an input and a double; fibonacci.c, which builds a fibonacci sequence of an inputted length; and ArcTan.c, which computes the hyperbolic arc tangent using two different methods

## Compile:

* gcc use_scanf.c -o scanfc

* gcc fibonacci.c -o fibonacci

* gcc ArcTan.c -o ArcTan -lm

## Execute

* For scanfc

./scanfc

* For fibonacci

./fibonacci

* For ArcTan

./ArcTan

## Output

* For scanfc

If an integer and a double are supplied (e.g. 1 3.33333333), no output. 

If different input formats are supplied (e.g a b), "Problem with the input"

* For fibonacci

Will be asked to input a positive integer (n). If the integer is above 46, negative numbers will start to appear due to the upper number limit of 2147483647.

Eg, n=40

Enter a positive integer
40
Fibonacci sequence is: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 
6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 
832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 
102334155,

Eg, n=47

Enter a positive integer
47
Fibonacci sequence is: 
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181, 
6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 
832040, 1346269, 2178309, 3524578, 5702887, 9227465, 14930352, 24157817, 39088169, 63245986, 
102334155, 165580141, 267914296, 433494437, 701408733, 1134903170, 1836311903, -1323752223,

* For ArcTan

Asked to input a real positive number, delta, which is a precision number, the smaller the number, the higher the accuracy.

For a delta of 0.01:

Enter delta value 
0.01
Difference at -0.900000 is 0.0281294076
Difference at -0.800000 is 0.0097281954
Difference at -0.700000 is 0.0031045602
Difference at -0.600000 is 0.0015960948
Difference at -0.500000 is 0.0013894777
Difference at -0.400000 is 0.0002675969
Difference at -0.300000 is 0.0005196042
Difference at -0.200000 is 0.0000658874
Difference at -0.100000 is 0.0000020144
Difference at -0.000000 is 0.0000000000
Difference at 0.100000 is 0.0000020144
Difference at 0.200000 is 0.0000658874
Difference at 0.300000 is 0.0005196042
Difference at 0.400000 is 0.0002675969
Difference at 0.500000 is 0.0013894777
Difference at 0.600000 is 0.0015960948
Difference at 0.700000 is 0.0031045602
Difference at 0.800000 is 0.0097281954
Difference at 0.900000 is 0.0281294076

For a delta of 0.001

Enter delta value 
0.001
Difference at -0.900000 is 0.0031391438
Difference at -0.800000 is 0.0010705906
Difference at -0.700000 is 0.0005616904
Difference at -0.600000 is 0.0001465353
Difference at -0.500000 is 0.0000563923
Difference at -0.400000 is 0.0000335397
Difference at -0.300000 is 0.0000336042
Difference at -0.200000 is 0.0000018874
Difference at -0.100000 is 0.0000020144
Difference at -0.000000 is 0.0000000000
Difference at 0.100000 is 0.0000020144
Difference at 0.200000 is 0.0000018874
Difference at 0.300000 is 0.0000336042
Difference at 0.400000 is 0.0000335397
Difference at 0.500000 is 0.0000563923
Difference at 0.600000 is 0.0001465353
Difference at 0.700000 is 0.0005616904
Difference at 0.800000 is 0.0010705906
Difference at 0.900000 is 0.0031391438



Fibonacci series:

Compile : gcc fibonacci.c -o fibonacci -lm

Run : ./fibonacci

We are using scanf and obtaining the values from the user.

Function is created to calculate Fibonacci series which has two input arguments Fn−1 and Fn−2.On exit they have Fn and Fn−1

A loop is constructed to print out the Fibonacci series.

Maclaurin series:

Compile : gcc maclaurin.c -o maclaurin -lm

Run : ./maclaurin

We are using scanf to obtainin the values from the user for Delta. Since Maclaurin Series is infinite, delta is used to stop the function.

Function artanh1(x) is created to find an approximation to Maclaurin series.

Function artanh2(x) is created to find an approximation to natural logarithms.

*The difference between the Maclaurin series approximation and the natural logarithm approximation is determined using a sample of x between -0.9 and 0.9 by 0.01.
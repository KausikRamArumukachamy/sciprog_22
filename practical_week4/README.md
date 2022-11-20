Week 4 :

compile : gcc Trapezoidal.c -o Trapezoidal -lm

run : ./Trapezoidal

The Trapezodial rule is used in the code to determine the area under the curve of f (x) where x [a, b].

The initial area is determined using the curve's beginning and ending points, which in this instance are an(0) + tan(/3)

By constructing 11 equal-distance points between 0 and 3, adding them to the starting area, and then multiplying the result by b-a/2N, one may get the remaining area.

The computed area is compared using Log(2), and both the approximate and precise numbers are
/*
 Find e using Taylor series expansion
 */
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(void){
    int i, order;
    double e, *terms;
  //Enter polynomial order
    printf("Please enter the required polynomial order\n");
    if (scanf("%d",&order)!=1) {
        printf("Did not enter a number");
        return 1;
    }
//Allocate space for terms array
// terms=malloc(order*sizeof(double));
terms = malloc(order*sizeof(double));

for (i=0; i<order; i++){
   terms[i]=1.0/(double)factorial(i+1);
   printf("e term for order %d is %1.141f\n", order, terms[i]);
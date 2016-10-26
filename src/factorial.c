#include <stdio.h> //printf
#include "factorial.h"

/* Definition for "factorial"
 * Note: this must match the type specified in the header file above
 */
int factorial(int n) { //ERROR: should return 1 if n=0 and return an error if n<0
    /* By convention in C, all variables must by type defined at the top
     * of each function */
    int fac = n;

    //making cases for n<=0
    if(n==0){
    return 1;
    }
    else if(n<0){
    printf("Error: cannot take factorial of negative. Returning 0.\n");
    return 0;
    }

    while (n > 2) { //error fix: 0->2
        /* var-- reads the contents of an integer variable, then decrements
           --var decrements the contents of an integer variable, then returns
         */
        n--;
        // a *= b is equivalent to a = a * b
        fac *= n;
    }
    return fac;
}

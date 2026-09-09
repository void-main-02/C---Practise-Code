
/* 3. Write a Program in C to find the sum of the following series

(a) S=1 + 2 + 3 + 4 +...........+ N (Input N).
(b) S=1 + 3 + 5 + 7 + ..........+ N (Input N).
(c) S=1+1/2 + 1/4 + 1/8 + 1/16 +.......... + 1/ 2^N (Input N).
(d) S=1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 +........... Up to Nth Term.
(e) S= 1/1! + 1/2! + 1/3! + 1/4! +...........+ 1/N! (Input N).
(f) sin(x)= x - (x^3)/3! +(x^5)/5! - .... Up to Nth Term.
*/

// Solution:

#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n <= 1) return 1; 
    return n * factorial(n - 1); 
}



int main() {

    // (a) S=1 + 2 + 3 + 4 +...........+ N (Input N).

    int num1; 
    printf("Enter a number : ");
    scanf("%d", &num1);
    int sum1 = ((num1 + 1)*num1)/2;
    printf("S = 1 + 2 + ... + upto %d terms is %d \n\n", num1, sum1);

    // (b) S=1 + 3 + 5 + 7 + ..........+ N (Input N).

    int num2;
    printf("Enter a number: ");
    scanf("%d", &num2);
    int sum2 = pow(num2, 2);
    printf("S = 1 + 3 + 5 + ... upto %d terms is %d\n\n", num2, sum2);

    // (c) S=1+1/2 + 1/4 + 1/8 + 1/16 +.......... + 1/ 2^N (Input N).

    int num3;
    printf("Enter a number : ");
    scanf("%d", &num3);
    float sum3 = ((1- pow(0.5 , num3))/0.5);
    printf("S = 1 + 1/2 + 1/4 + ... upto %d terms is %f\n\n", num3, sum3);

    // (d) S=1 + 1/3 + 1/9 + 1/27 + 1/81 + 1/243 +........... Up to Nth Term.

    int num4;
    printf("Enter a number : ");
    scanf("%d", &num4);
    float sum4 = ((1- pow(0.333334 , num4))/0.666667);
    printf("S = 1 + 1/3 + 1/9 + ... upto %d terms is %f\n\n", num4, sum4);

    // (e) S= 1/1! + 1/2! + 1/3! + 1/4! +...........+ 1/N! (Input N).

    int num5; 
    printf("Enter a numer: ");
    scanf("%d", &num5);
    float sum5;

    int i=1;
    while(i<=num5){
        sum5 += 1.0/factorial(i);
        i++;
    }
    printf("S= 1/1! + 1/2! + 1/3! + .. upto %d terms is %f\n\n", num5, sum5);

    // (f) sin(x)= x - (x^3)/3! +(x^5)/5! - .... Up to Nth Term.

    int num6; float x;
    printf("Enter a number of terms and Value of x : ");
    scanf("%d %f", &num6, &x);
    float sum6 = 0;
    float term;

    int l = 1, sign = 1;
    while((l<=(num6*2-1))){
        term = sign*(pow(x, l)*1.0)/factorial(l)*1.0;
        sum6 += term;
        
        l+=2;
        sign = -sign;
    }
    printf("sin(x)= x - (x^3)/3! +(x^5)/5! - .... Up to %d terms  is %f", num6, sum6);

    return 0;
}

/*Output:
Enter a number : 4
S = 1 + 2 + ... + upto 4 terms is 10 

Enter a number: 4
S = 1 + 3 + 5 + ... upto 4 terms is 16

Enter a number : 4
S = 1 + 1/2 + 1/4 + ... upto 4 terms is 1.875000

Enter a number : 4
S = 1 + 1/3 + 1/9 + ... upto 4 terms is 1.481481

Enter a numer: 4
S= 1/1! + 1/2! + 1/3! + .. upto 4 terms is 1.708333

Enter a number of terms and Value of x : 3 3.14
sin(x)= x - (x^3)/3! +(x^5)/5! - .... Up to 3 terms  is 0.523849
*/
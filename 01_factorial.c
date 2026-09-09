// Q1.Write a Program in C to compute the Factorial of a Number.

// Solution :

#include <stdio.h>

int main() {
    int num;
    int factorial =1;
    printf("Enter a number : ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        factorial *=i;
    }
    printf("%d factorial or %d! = %d", num, num, factorial);
    return 0;
}

/* Output : 

Enter a number : 0
0 factorial or 0! = 1

Enter a number : 10
10 factorial or 10! = 3628800
*/
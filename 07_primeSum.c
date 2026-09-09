// 7. Write a Program in C to find the sum of all the Prime numbers between a given ranges of numbers.

// Solution:

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    printf("Enter TWO numbers(>1) : ");
    int n1, n2; 
    scanf("%d %d", &n1, &n2);
    int primeSum = 0;
    bool isPrime;

    for(int i = n1; i<=n2; i++ ){
        isPrime = true;
        for(int j=2; j <= sqrt(i); j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) primeSum += i;
    }
    printf("Sum of the Prime number in Between %d and %d is %d", n1, n2, primeSum);

    return 0;
}
/*Output:
Enter TWO numbers(>1) : 2 90
Sum of the Prime number in Between 2 and 90 is 963
*/
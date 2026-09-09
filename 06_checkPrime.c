// 6. Write a Program in C to check whether a number is Prime or not.

// Solution:

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
    printf("Enter a number(>0) : ");
    int n; 
    scanf("%d", &n);

    bool isPrime = true;

    for(int i=2; i <= sqrt(n); i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if((isPrime) && (n!=1)) printf("%d is a Prime number.", n);
    else if((isPrime) && (n==1)) printf("%d is NEITHER a Prime NOR a Composite number.", n);
    else printf("%d is NOT a Prime number.", n);
    return 0;
}

/*Output:
Enter a number(>0) : 83
83 is a Prime number.

Enter a number(>0) : 9
9 is NOT a Prime number.

Enter a number(>0) : 1
1 is NEITHER a Prime NOR a Composite number.
*/
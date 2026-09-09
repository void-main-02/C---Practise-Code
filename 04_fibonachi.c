// 4. Write a Program in C to Generate the Fibonacci Series up to Nth Term.
// 1 + 1 + 2 + 3 + 5 + 8 + 13 + ........ + Nth Term

// Solution : 

#include <stdio.h>

int main() {
    printf("Enter number: ");
    int n; scanf("%d", &n);
    int a = 1, b = 0;
    int sum = 1;

    printf("1 ");
    int i=1; 
    while(i<=(n-1)){
        printf("+ %d ", sum);
        b = a; 
        a = sum; 
        sum = a + b;
        i++;
    }
    return 0;
}

/*Output:
Enter number: 11
1 + 1 + 2 + 3 + 5 + 8 + 13 + 21 + 34 + 55 + 89 
*/
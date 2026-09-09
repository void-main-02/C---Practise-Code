//  Q19.Write a Program in C to Generate the Fibonacci Series up to Nth Term.
//      1 + 1 + 2 + 3 + 5 + 8 + 13 + ........ + Nth Term

#include <stdio.h>

int main() {
    
    printf("Enter a number : ");
    int num; scanf("%d", &num);

    int a = 1, b = 0, sum = 1;

    printf("1");

    for(int i = 0; i<num-1; i++){
        printf(" + %d", sum);
        b = a;
        a = sum;
        sum = a + b;
    }

    return 0;
}
/*Output:
Enter a number : 7
1 + 1 + 2 + 3 + 5 + 8 + 13
*/
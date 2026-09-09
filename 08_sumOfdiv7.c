
// 8. Write a Program in C o find & Print the Sum of all the Numbers Divisible by 7 within a given Range.

// Slution:

#include <stdio.h>

int main() {
    printf("Enter TWO numbers : ");
    int n1, n2; 
    scanf("%d %d", &n1, &n2);
    int sum = 0;

    for(int i=n1; i<=n2; i++){
        if(i%7 == 0) sum += i;
    }
    printf("The sum of numbers divisible by 7 in the range %d - %d is %d", n1, n2, sum);

    return 0;
}
/*Outut:

Enter TWO numbers : 2 90
The sum of numbers divisible by 7 in the range 2 - 90 is 546

*/
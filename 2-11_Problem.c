// Q30. Write a Program in C to find the sum of the series using function. S= 1! + 2! + 3! + 4! + . . .

#include <stdio.h>

int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int main() {
    printf("Enter the number : ");
    int n; scanf("%d", &n);

    printf("S = 1! + 2! +..+ %d! ", n);

    int sum = 0;
    for(int i= 1; i<=n; i++){
        sum += fact(i);
    }
    printf("= %d", sum);
    return 0;
}

/*Output:

Enter the number : 6
S = 1! + 2! +..+ 6! = 873
*/

// 5. Write a Program in C to Print the Reverse of a Number.

// Solution:

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp = num;
    int reverseNum = 0;

    while(num > 0){
        reverseNum *=10;
        reverseNum += num%10;
        num /= 10;
    }
    printf("The Reverse number of %d is %d",temp, reverseNum);

    return 0;
}

/*Output:
Enter a number : 123
The Reverse number of 123 is 321

Enter a number : 1200
The Reverse number of 1200 is 21
*/ 

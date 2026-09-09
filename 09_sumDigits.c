// 9. Write a Program in C to find the Sum of the Digits of a Number

// Solution:

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int temp = num;
    int digitSum = 0;

    while(num > 0){
        digitSum += num%10;
        num /= 10;
    }
    printf("The sum of the digits of the number %d is %d",temp, digitSum);

    return 0;
}

/*Output:
Enter a number : 8940375
The sum of the digits of the number 8940375 is 36

Enter a number : 1234
The sum of the digits of the number 1234 is 10
*/
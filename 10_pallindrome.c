// 10. Write a C program for determining whether a number is Palindrome or not.(e.g. 141 is a Palindrome number.)

//Solution:

#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int  num; scanf("%d", &num);
    int temp = num;
    int reverseNum = 0;

    while(num > 0){
        reverseNum *=10;
        reverseNum += num%10;
        num /= 10;
    }

    if(reverseNum == temp) printf("%d is a Palindrome", temp);
    else printf("%d is NOT a Palindrome", temp);
    return 0;
}

/*Output:
Enter a number: 1098901
1098901 is a Palindrome

Enter a number: 789
789 is NOT a Palindrome
*/
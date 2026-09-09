//  Q31. Write a Program in C to find the GCD & LCM of two given numbers using function.

#include <stdio.h>

int gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    int GCD = gcd(a, b);
    int LCM = (a * b) / GCD;

    printf("GCD = %d\n", GCD);
    printf("LCM = %d", LCM);

    return 0;
}
/*Output:
Enter two numbers: 34 56
GCD = 2
LCM = 952
*/
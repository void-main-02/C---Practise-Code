//  Q26. Write a C program where the output will be as given below
// Input: Kalyani Government Engineering College
// Output: KGEC

#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    printf("Output: ");

    if(str[0] != ' ')
        printf("%c", str[0]);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ' && str[i+1] != ' ')
            printf("%c", str[i+1]);
    }

    return 0;
}
/*Output:
Enter a sentence:
Kalyani Government Engineering College
Output: KGEC
*/

//  Q27. Write a program to count the number of words in a string

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count = 1, i;

    printf("Enter a sentence:\n");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            count++;
    }

    printf("Number of words = %d", count);

    return 0;
}
/*Output:
Enter a sentence:
Hello Hi
Number of words = 2
*/

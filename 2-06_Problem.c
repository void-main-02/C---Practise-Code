//  Q23.Write a Program in C to show the elements of a Matrix.

#include <stdio.h>

int main()
{
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    int a[r][c];

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Matrix is:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%d ", a[i][j]);

        printf("\n");
    }

    return 0;
}
/*Output:
Enter rows and columns: 3 3
Enter matrix elements:
1 2 3 4 5 6 7 8 9
Matrix is:
1 2 3 
4 5 6 
7 8 9 
*/

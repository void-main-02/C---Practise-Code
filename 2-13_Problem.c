//  Q32. Write a Program in C to calculate the area of a triangle, rectangle or a circle using function depending on the choice entered by the user.

// 1. Triangle
// 2. Rectangle
// 3. Circle
// 4. Exit

#include <stdio.h>

float triangle(float b, float h)
{
    return 0.5 * b * h;
}

float rectangle(float l, float w)
{
    return l * w;
}

float circle(float r)
{
    return 3.14159 * r * r;
}

int main()
{
    int choice;
    float a, b;

    while(1)
    {
        printf("\n1. Triangle");
        printf("\n2. Rectangle");
        printf("\n3. Circle");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter base and height: ");
                scanf("%f%f", &a, &b);
                printf("Area = %.2f", triangle(a, b));
                break;

            case 2:
                printf("Enter length and width: ");
                scanf("%f%f", &a, &b);
                printf("Area = %.2f", rectangle(a, b));
                break;

            case 3:
                printf("Enter radius: ");
                scanf("%f", &a);
                printf("Area = %.2f", circle(a));
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice");
        }
    }
}
/*Output:
1. Triangle
2. Rectangle
3. Circle
4. Exit
Enter your choice: 1
Enter base and height: 4 3
Area = 6.00
*/

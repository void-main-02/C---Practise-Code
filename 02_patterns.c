/* 2. Write Programs in C to generate the following patterns up to Specified numberof Rows:
a)  *       
   * *
  * * *
 * * * *
 
b) * * * *
    * * *
     * *
      *
      
c) 1
  2 2
 3 3 3
4 4 4 4

d) 1
   2 3
   4 5 6
   7 8 9 10

e)  1
    2 1
    3 2 1
    4 3 2 1
    5 4 3 2 1
*/

// Solution : 

#include <stdio.h>

int main() {

    printf("Enter the number of rows: ");
    int n; scanf("%d", &n);

    // Soln : (a)
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n+1-i); j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // Soln: (b)
    for(int i=1; i<=n; i++){
        for(int j=0; j<= (i-1); j++){
            printf(" ");
        }
        for(int k=1; k<=(n+1-i); k++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");

    // Soln: (c)
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n+1-i); j++){
            printf(" ");
        }
        for(int k=1; k<=i; k++){
            printf("%d ", i);
        }
        printf("\n");
    }
    printf("\n\n");

    // Soln: (d)
    int k = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
    printf("\n\n");

    // Soln: (e)
    for(int i=1; i<=n; i++){
        for(int j=i; j>=1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*Output:
Enter the number of rows: 6
      * 
     * * 
    * * * 
   * * * * 
  * * * * * 
 * * * * * * 


 * * * * * * 
  * * * * * 
   * * * * 
    * * * 
     * * 
      * 


      1 
     2 2 
    3 3 3 
   4 4 4 4 
  5 5 5 5 5 
 6 6 6 6 6 6 


1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 21 


1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
6 5 4 3 2 1
*/

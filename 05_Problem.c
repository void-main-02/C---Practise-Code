//  Q22.Write a Program in C to Search an Element in an Array.

#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("Enter Your searching number : ");
    int test; scanf("%d", &test);

    int arr[] = { 17, 9, 54, 89};
    int len = (sizeof(arr)/ sizeof(arr[0]));
    bool flag = false;

    for(int i=0; i<len; i++){
        if(arr[i] == test){
            printf("%d is found in position number %d ", test, (i+1));
            flag = true;
            break;
        }
    }
    if(!flag) printf("%d is not in the array", test);

    return 0;
}
/*Output

Enter Your searching number : 9
9 is found in position number 2 
*/
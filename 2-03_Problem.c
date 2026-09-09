//  Q20.Write a Program in C to check Maximum & Minimum Number in an Array.

#include <stdio.h>

int main() {
    int arr[] = {1,20,-90,4,5};
    int max = arr[0], min = arr[0];

    for(int i=1; i< (sizeof(arr)/sizeof(arr[0])); i++ ){
        if(max < arr[i]) max = arr[i];
        if(min > arr[i]) min = arr[i];
    }
    printf("Max num : %d\nMin num : %d ", max, min);

    return 0;
}
/*Output:
Max num : 20
Min num : -90 
*/

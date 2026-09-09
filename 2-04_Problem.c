//  Q21.Write a Program in C to Sort (Bubble, Insertion and Selection) the Number in an Array.

#include <stdio.h>

void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {1,4,5,6,9,2};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<len; i++){
        for(int j=i+1; j<len; j++){
            if(arr[i]>arr[j]) swap(&arr[i], &arr[j]);
        }
    }
    printf("Sorted Array : \n");
    for(int k=0; k<len; k++){
        printf("%d ", arr[k]);
    }
    return 0;
}
/* Output 

Sorted Array:
1 2 4 5 6 9 */

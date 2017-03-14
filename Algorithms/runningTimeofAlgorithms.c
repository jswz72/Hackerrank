#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;      //array length
    int temp;   //holds element being sorted
    int count = 0;   //number of swaps made
    int j;      //backwards comparison itereator
    
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    
    for(int arr_i = 0; arr_i < n; arr_i ++){
        scanf("%d", &arr[arr_i]);
    }
    
    //iterate through array, marking first element as sorted
    for(int i = 1; i < n; i++){
        temp = arr[i];      //first unsorted element
        j = i - 1;          //last sorted element
        while(temp < arr[j]){
            arr[j+1] = arr[j];  //shift to right if greater
            count++;            
            j--;
        }
        arr[j+1] = temp;    //no shift, insert if lesser 
            
    }
 
    printf("%d",count);
    return 0;
}


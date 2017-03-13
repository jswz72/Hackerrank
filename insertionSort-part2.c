#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  arr) {
    
    int s;    //first element already sorted
    int i;
    int temp;
    
    //sorted array grows by 1 each iteration
    for(s = 0; s < ar_size - 1; s++){
        temp = arr[s+1];
        i = s;
        //find spot for temp
        while(temp < arr[i]){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1] = temp;
        
        //print with temp in correct spot
        for(int j = 0; j < ar_size; j++){
            printf("%d ",arr[j]);
        }
        printf("\n");
    }
    return;
}
int main(void) {
   
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
        scanf("%d", &_ar[_ar_i]); 
    }

    insertionSort(_ar_size, _ar);
   
    return 0;
}

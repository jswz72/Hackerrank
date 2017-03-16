#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void partition(int ar_size, int *  arr) {
    
    if(ar_size < 2){
        return;
    }
    
    int p = arr[0];     //pivot element is first in array
    int leftcount = 0;
    int left[ar_size];
    int rightcount = 0;
    int right[ar_size];
    int equalcount = 0;
    int equal[ar_size];
    int flag = 0;
    
    
    for(int i = 0; i < ar_size; i++){
        if(arr[i] == p){
            equal[equalcount] = arr[i];
            equalcount++;
        }
        else if(arr[i] < p){
            left[leftcount] = arr[i];
            leftcount++;
        }
        else if(arr[i] > p){
            right[rightcount] = arr[i];
            rightcount++;
        }
    }
    
    partition(leftcount, left);
    partition(rightcount,right);
    
    int arr_i = 0;
    for(int i = 0; i < leftcount; i++){
        arr[arr_i] = left[i];
        printf("%d ",left[i]);
        arr_i++;
    }
    for(int i = 0; i < equalcount; i++){
        arr[arr_i] = equal[i];
        printf("%d ", equal[i]);
        arr_i++;
    }
    for(int i = 0; i < rightcount; i++){
        arr[arr_i] = right[i];
        printf("%d ", right[i]);
        arr_i++;
    }
    printf("\n");
    
    

}
int main(void) {
   
   int _ar_size;
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
   scanf("%d", &_ar[_ar_i]); 
}

partition(_ar_size, _ar);
   
   return 0;
}


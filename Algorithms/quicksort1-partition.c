#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void partition(int ar_size, int *  arr) {
    
    int p = arr[0];     //pivot element is first in array
    int leftcount = 0;
    int left[ar_size];
    int rightcount = 0;
    int right[ar_size];
    int equalcount = 0;
    int equal[ar_size];
    
    
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
    for(int left_i = 0; left_i < leftcount; left_i++){
        printf("%d ", left[left_i]);
    }
    for(int equal_i = 0; equal_i < equalcount; equal_i++){
        printf("%d ", equal[equal_i]);
    }
    for(int right_i = 0; right_i < rightcount; right_i++){
        printf("%d ", right[right_i]);
    }
    

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


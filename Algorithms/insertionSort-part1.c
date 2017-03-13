#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
void insertionSort(int ar_size, int *  ar) {
    
    int temp = ar[ar_size - 1];
    int i = ar_size - 2;
   
    while(temp < ar[i]){
        ar[i+1] = ar[i];
        for(int j = 0; j < ar_size; j++){
            printf("%d ",ar[j]);
        }
        printf("\n");
        i--;
    }
    ar[i+1] = temp;
    for(int k = 0; k < ar_size;k++){
        printf("%d ",ar[k]);
    }

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

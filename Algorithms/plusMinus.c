//plusminus

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    //Create array size N
    int n; 
    scanf("%d",&n);
    int arr[n];
    double plus;
    double minus;
    double zeroes;

    //Input contents
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > 0){
            plus++;
        }
        else if(arr[i] < 0){
            minus++;
        }
        else if(arr[i] == 0){
            zeroes++;
        }
    }
    printf("%.6lf\n", plus/n);
    printf("%.6lf\n", minus/n);
    printf("%.6lf\n", zeroes/n);


    return 0;
}



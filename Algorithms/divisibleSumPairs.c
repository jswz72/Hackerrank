#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int k; 
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    int count;  //counts number of pairs that satisfy condition
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    } 
    //iterate through i's
    for(int i = 0; i < n; i++){
        //iterate through j's (i has to be < j)
        for(int j = (i+1); j < n; j++){ 
            if((a[i] + a[j]) % k == 0){
                count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}


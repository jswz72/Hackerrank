#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;  //hurdles   
    int k;  //initial max height able to jump 
    int count = 0;  //number of beverages necessary
    scanf("%d %d",&n,&k);
    int *height = malloc(sizeof(int) * n);
    //heights of all hurdles
    for(int height_i = 0; height_i < n; height_i++){
       scanf("%d",&height[height_i]);
    }
   
    for(int i = 0; i < n; i++){
        if(height[i] > k){
            count += (height[i]-k);     //number of bevs must drink
            k = height[i];      //effect of bevs drank
        }
    }
    printf("%d",count);
   
    return 0;
}

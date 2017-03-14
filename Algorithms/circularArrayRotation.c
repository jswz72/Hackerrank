#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;  //# elements in array
    int k;  //# rotations to be made
    int q;  //# queries
    
    scanf("%d %d %d",&n,&k,&q);
    int *a = malloc(sizeof(int) * n);
    int *new_a = malloc(sizeof(int)*n);
    
    //Array contents
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    //Right rotations
    k = k % n;
    for(int i = 0; i < n; i++){
        if(i + k >= n){  
            new_a[k-(n-i)] = a[i];  //Rotation goes beyond array
        }else{
            new_a[i + k] = a[i];
        }
    }
    //Queries
    for(int a0 = 0; a0 < q; a0++){
        int m; 
        scanf("%d",&m);
        printf("%d", new_a[m]);
        printf("\n");
    }
    
    
    
    return 0;
}


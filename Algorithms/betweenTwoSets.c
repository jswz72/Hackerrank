#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    int m; 
    scanf("%d %d",&n,&m);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    int *b = malloc(sizeof(int) * m);
    for(int b_i = 0; b_i < m; b_i++){
       scanf("%d",&b[b_i]);
    }
    
    //Find smallest number in b
    int smallest = b[0];
    for(int i = 0; i < m; i++){
        if(b[i] < smallest){
            smallest = b[i];
        }
    }
    //printf("%d",smallest);
    //Iterate through possible numbers btwn sets
    bool btwn = true;
    int count = 0;
    for(int j = 1; j <= smallest; j++){
        btwn = true;
        //Check if factor of all numbers in 'b'
        for(int b_j = 0; b_j < m; b_j++){
            if(b[b_j] % j != 0){
                btwn = false;
                break;
            }
        }
        //If passed factor check, then check if multiple of all elements in a
        if(btwn){
            //Check if multiple of all numbers in 'a'
            for(int a_j = 0; a_j < n; a_j++){
                if(j % a[a_j] != 0){
                    btwn = false;
                    break;
                }
            }
        }
        //If passed both checks, add to count
        if(btwn){
            count++;
        }
    }
    
    printf("%d",count);
    
    return 0;
}


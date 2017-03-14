#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;  //items ordered
    int k;  //index item Anna didn't eat
    int charged;    //amt anna charged for bill
    int sum = 0;
    int *items;      //costs of each item

    scanf("%d %d", &n, &k);
    items = (int *)malloc(n*sizeof(n)); 
    
    //enter costs of each item
    for(int i = 0; i < n; i++){
        scanf("%d", &items[i]);
    }
    scanf("%d", &charged);
    
    for(int j = 0; j < n; j++){
        if(j != k){
            sum += items[j];
        }
    }
    sum /= 2;   //anna's share
    if(charged == sum){
        printf("Bon Appetit");
    }
    else{
        printf("%d", charged - sum);
    }
        
    return 0;
}


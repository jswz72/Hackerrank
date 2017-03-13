#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    for(int a0 = 0; a0 < n; a0++){
        int grade; 
        scanf("%d",&grade);

        //No rounding
        if(grade < 38){
            printf("%d\n",grade);
        }
        //If within 3 point to multiple of 5, round up
        else if((grade+1) % 5 == 0){
            printf("%d\n",grade+1);
        }
        else if((grade + 2) % 5 == 0){
            printf("%d\n",grade+2);
        }
        else{
            printf("%d\n",grade);
        }
    }
    return 0;
}

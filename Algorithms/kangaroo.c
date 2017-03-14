#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    
    //kangaroo1 movement: x1 + cv1
    //kangaroo2 movement: x2 + cv2
    //Meet when x1 + cv1 = x2 + cv2
    
    if(v2 == v1){
        printf("NO");
        return 0;
    }
    if((x1-x2)%(v2-v1) == 0 && (x1-x2)/(v2-v1) > 0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}


//left rotation
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
        int *arr = NULL;        //pointer to start of array
        int i = 0;
        int n = 0;
        int stop = 0;
        int left_rot = 0;
        int *rot_arr = NULL;    //pointer to start of new array, after rotation




        scanf("%d %d",&n, &left_rot);
                                
        arr = (int *)realloc(arr,n*sizeof(int));
        rot_arr = (int *)realloc(rot_arr,n*sizeof(int));



        for(i = 0; i < n; i++){
                scanf("%d",&arr[i]);
        }
        //Execute left rotations
        for(i = 0; i < n; i++){
                if(i < left_rot){
                        rot_arr[(n-1)-(left_rot-(i+1))] = arr[i];
                }
                else{
                        rot_arr[i-left_rot] = arr[i]; 
                }
        }
        for(i = 0; i < n; i++){
                printf("%d ",rot_arr[i]);
        }
        printf("\n");
        free(arr);
        return 0;
}
     
	 

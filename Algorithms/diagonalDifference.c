/* Given matrix N x N, calculates absolute difference between sums of its diagonals*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>



int main(){
        int n;
        scanf("%d", &n);
        int a[n][n];    //Make 2d matrix of N x N
        int left_d = 0;
        int right_d = 0;
        //Scan all elements of matrix   
        for(int a_i = 0; a_i < n; a_i++){
                for(int a_j = 0; a_j < n; a_j++){

                        scanf("%d", &a[a_i][a_j]);
                }
        }

        for(int i = 0; i < n; i++){     //rows
                for(int j = 0;j < n; j++){
                        //Sum left diagonal
                        if(i == j){
                                left_d += a[i][j];
                        }
                        //Sum right diagonal
                        if(j  == (n-1-i)){
                                right_d += a[i][j];
 }
                }
        }
        printf("%d\n", abs(left_d-right_d));
        return 0;
}


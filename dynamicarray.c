#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0;  //number of sequences 
    int m = 0;  //elements in sequence
    int lastAns = 0;
    int num_q = 0;
    int seq;
    int q;
    int x;
    int y;
    int length;
    
    scanf("%d %d", &n, &num_q);
    
    //Allocate 2d array
	int **seqList = (int **) malloc(sizeof(int *)* n);
	for(int i = 0; i < n; i++){
		seqList[i] = (int *) malloc(sizeof(int)*m);
	}
    
    //iterate through queries
    for(int j = 0; j < num_q; j++){
        scanf("%d %d %d", &q, &x, &y);
        
        seq = (x ^ lastAns) % n;
        //Query 1: append y to sequence
        if(q == 1){
          length = sizeof(seqList[seq])/sizeof(int);
          seqList[seq] = (int *)realloc(seqList,sizeof(int)*length);  
          seqList[seq][length - 1] = y; 
        }
        //Query 2
        else if(q == 2){
            lastAns = seqList[seq][y % (sizeof(seqList[seq])/sizeof(int))];
            printf("%d\n",lastAns);
        }
    }
    
     
    return 0;
}



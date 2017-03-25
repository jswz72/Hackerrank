#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	int *score = malloc(sizeof(int) * n);	//point scored per game, sequentially
	for(int score_i = 0; score_i < n; score_i++){
		scanf("%d", &score[score_i]);
	}
	//initialize max/min to first element
	int most = score[0];
	int least = score[0];
	//counters for how many times record broken
	int mostBreak = 0;
	int leastBreak = 0;

	for(int i = 1; i < n; i++){
		if(score[i] < least){
			least = score[i];
			leastBreak++;
		}
		else if(score[i] > most){
			most = score[i];
			mostBreak++;
		}
	}

	printf("%d %d", mostBreak, leastBreak);

	return 0;
}

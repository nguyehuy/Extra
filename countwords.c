#include <stdio.h>
#include "countwords.h"
#include <stdlib.h>
#include <string.h>
int * countwords(char **str, int size){
	int * number=(int*)malloc(52*sizeof(int));
	for(int j=0; j<52;j++){
		number[j]=0;
	}
	for(int i=0;i<size;i++){
		number[(str[i][0]-65)*2]+=1;
	}
	for(int j=0;j<size;j++){
		for(int k=0;k< strlen(str[j]);k++)
			number[(str[j][k]-65)*2+1]+=1;
	}
//	for(int k=0;k<52;k++){
//		printf("%d\n",number[k]);
//	}
	return number;
}


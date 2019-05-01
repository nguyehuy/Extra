#include <stdio.h>
#include "findduplicate.h"
#include <stdlib.h>
#include <string.h>

char *strcat(char *dest,const char *src);
char ** findduplicate(int size, int *amount){
    FILE * file;
    file=fopen("wlist.txt", "r");
    if(file==NULL){
        printf("Can not open file 'wlist.txt'");
        exit(EXIT_FAILURE); 
    }
	char **str=calloc(size,sizeof(char*));
	char **duplicates=calloc(size,sizeof(char*));
	int i=0;
	int a;
	int *times=(int*)calloc(size, sizeof(int));
	char *c=(char*)malloc(40);
	while(fscanf(file,"%s",c)!= EOF){
		str[i]=calloc(strlen(c), sizeof(char));
		for(a=0; a<i;a++){
			if(strcmp(c, str[a])==0){
				if(times[a]==0){
				//	printf("\033[45;1H");
				//	printf("%s\t",c);
					duplicates[*amount]=calloc(strlen(c), sizeof(char));
					strcpy(duplicates[*amount],c);
					*amount=*amount+1;
				}
				times[a]++;
				break;
			}
		}
		if(a>=i){
			strcpy(str[i], c);
			times[i]=0;
			i++;
		}
	}
	fclose(file);
	duplicates=realloc(duplicates,(*amount+1)*sizeof(char));
	return duplicates;
}

#include <stdio.h>
#include "readfile.h"
#include <stdlib.h>
#include <string.h>
char ** readfile(int *size){
    FILE * file;
	char *ch=(char*)malloc(40);
    file=fopen("wlist.txt", "r");
    if(file==NULL){
        printf("Can not open file 'wlist.txt'");
        exit(EXIT_FAILURE); 
    }
    while(fscanf(file,"%s",ch) !=EOF){
		*size=*size+1;
    } 
//	printf("ccc: %d", *size);
	fclose(file);
	file=fopen("wlist.txt", "r");
	char **str=malloc(*size*sizeof(char*));
	int j=0;
	char *c=(char*)malloc(40);
	while(fscanf(file,"%s",c)!= EOF){
		str[j]=malloc(strlen(c)* sizeof(char));
		strcpy(str[j], c);
		j=j+1;
	}
	fclose(file);
	return str;
}

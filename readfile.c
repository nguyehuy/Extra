#include <stdio.h>
#include "readfile.h"
#include <stdlib.h>
#include <string.h>
char ** readfile(int *size){
	// Open file text to get how many words in this file
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
	fclose(file);
	// Open it agin and read the conten of file, return the 2-d array which 
	// contains the words in this file
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

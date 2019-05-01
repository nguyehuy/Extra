#include <stdio.h>
#include "readfile.h"
#include <stdlib.h>
#include "countwords.h"
#include "findduplicate.h"
#include <string.h>
#include "screen.h" 
int main(){
	int size=0;
	char **str= readfile(&size);
	int *number=countwords(str, size);
	int number_duplicates=0;
	char **duplicates=findduplicate(size,&number_duplicates);
	barChart(number, duplicates, number_duplicates);
	resetColors();
	getchar();
	return 0;
}

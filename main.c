#include <stdio.h>
#include "readfile.h"
#include <stdlib.h>
#include "countwords.h"
#include "findduplicate.h"
#include <string.h>
#include "screen.h" 
int main(){
	int size=0;// how may words in file text
	char **str= readfile(&size);// An array contains the words
	int *number=countwords(str, size);// Count the words
	int number_duplicates=0;// how many duplicate words 
	char **duplicates=findduplicate(size,&number_duplicates);// Get the duplicate words
	barChart(number, duplicates, number_duplicates);// Display bartchart
	resetColors();// ResetColor
	getchar();
	return 0;
}

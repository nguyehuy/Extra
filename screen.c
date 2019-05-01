
// this file contains screen functions. They are used to display
// sound levels on a PUTTY screen as a bar chart
#include <stdio.h>
#include "screen.h"
#include <stdio.h>
#include <string.h>

void barChart(int * array, char **duplicates, int number_duplicates){
	char a='A';
	printf("\033[8;80;160t");
	clearScreen();
	// Display duplicate words on the screen
	setColors(WHITE);
	printf("\033[3;1H");
	printf("%d duplicated words: ", number_duplicates);
	for(int i=0; i<number_duplicates; i++){
		printf("%s ",duplicates[i]);
	}
	// Dipslay bartchart 
	for (int i=0; i<COL*3; i++){ // for 52*3 columns
		if(array[i/3]>4){
			for (int j=0; j<array[i/3]/4; j++){
					printf("\033[%d;%dH", 45-j, i+1); // j is row and i is column
					if((i/3)%2==0){ 
						setColors(CYAN);// Display red colums which is the colums
						// how many words are starting with letter 'A,'B'
					}else{
						setColors(GREEN);// Display red colums which is the colums
						// how many letter 'A', 'B'
					}

#ifdef UNICODE    // conditional compilation
					printf("%s", BAR);
#else
					printf("%c", '*');
#endif
			}
		// Because of there are some colums which has value to small (<4)
		// We have to do this code below
		}else if(array[i/3]>4||array[i/3]!=0){
			printf("\033[45;%dH", i+1);
			if((i/3)%2==0){
                setColors(CYAN);
            }else{
                setColors(GREEN);
            }

#ifdef UNICODE    // conditional compilation
                    printf("%s", BAR);
#else
                    printf("%c", '*');
#endif
		// We do nor display colums which value  0
		}else{
			if((i/3)%2==0){
                setColors(CYAN);
            }else{
                setColors(GREEN);
            }
		}
		// Display the letters 'A', 'B',.. in the bottom of bart chart
		if(i%3==1){
			printf("\033[46;%dH", (i+1));
	        printf("%c", a);
			if(i%2==0)
				a++;
		}
		// Diplay the value of colums int the upper of its
		if(i%3==0){
			if(array[i/3]/10<1&&array[i/3]!=0){
				printf("\033[%d;%dH", 45-array[i/3]/4-1, i+2);
            	printf("%d", array[i/3]);
			}else if (array[i/3]/10>1){
            	printf("\033[%d;%dH", 45-array[i/3]/4-1, i+1);
            	printf("%d", array[i/3]);
			}
        }

	}
}

//Clear screen
void clearScreen(void){
	printf("\033[2J");
	fflush(stdout);
}
// Set the colors
void setColors(short bg){
	printf("\033[%d;1m", bg);
	fflush(stdout);
}
//Reset Colors
void resetColors(void){
	printf("\033[0m");
	fflush(stdout);
}


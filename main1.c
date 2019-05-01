#include <stdio.h>
#include <stdlib.h>
#include <string.h>                         // included header
#define MAX 2000

int main(void){                             // correct function
    FILE *fpointer;
    int reported [MAX];
    char ch[MAX], str[MAX][MAX];
    int index = 0, a;

    fpointer = fopen("wlist.txt","r");
    if(fpointer == NULL){
        printf("Error!");
        return 0;
    }
    while(fscanf(fpointer,"%s",ch) == 1){   // testing for 1 item read
        for(a=0; a<index; a++){
            if(strcmp(ch, str[a])==0){
                if (reported[a] == 0)       // don't report twice
                    printf("%s ",ch);
                reported[a]++;
                break;
            }
        }
        if(a >= index) {                    // check if loop completed
            if (index >= MAX) {             // check if array is full
                printf("\nToo many words read\n");
                exit(1);
            }
            strcpy(str[index], ch);         // word was not found
            reported[index] = 0;
            index++;                        // keep tabs on array length
        }
    }
    printf("\n",ch);
    fclose(fpointer);
    return 0;
}

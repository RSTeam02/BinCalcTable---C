/*
 * return string "table" of bin operations
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../structIO/structInput.h"  
#include "operation.h"
#include "../exchange/swap.h"
#define BUF 16384
#define BUF2 1024 


char *calcFunc(struct INPUT input){		
	int a,b;
	char formatStr[BUF2];
	char dash[BUF2];  
	char *tmpStr = malloc(sizeof(char)*BUF);
	strcpy(tmpStr, "");
	
	for (int i =0; i < input.i; i++){
		for (int j =0; j < input.i; j++){			
			if(i == 0 && j == 0){				
				for (int k =0; k < input.i; k++){
					if(k==0) {
						sprintf(formatStr, " %c |", input.op);
						strcat(tmpStr, formatStr);
					}
					sprintf(formatStr,"%4.1d",(k+1));
					strcat(tmpStr, formatStr);
				}
				strcat(tmpStr, "\n");
				strcpy(dash, "---+");
				for (int j =0; j < input.i; j++){				
					strcat(dash, "----");
				}
				strcat(tmpStr, dash);
				strcat(tmpStr, "\n");			
			}
			a = i + 1;
			b = j + 1;

			if (input.exchange == 'y'){
				swap(&a,&b);
			}
			if(j == 0){
				sprintf(formatStr,"%2.1d |%4.1d",(i+1), selectOp(input.op, a, b));
				strcat(tmpStr, formatStr);
			}else {	
				sprintf(formatStr, "%4.1d", selectOp(input.op, a, b));
				strcat(tmpStr, formatStr);
			}		
		}
		strcat(tmpStr,"\n");
	}
	return tmpStr;
}

char *isCommute(struct INPUT input){
	if(selectOp(input.op, input.i-1, input.i) == selectOp(input.op, input.i, input.i-1)){
		return ("commutative: yes");	
	}else{
		return ("commutative: no");
	}
}
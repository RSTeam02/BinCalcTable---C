#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structIO/structInput.h"
#include "structIO/structOutput.h"
#include "binOperation/calcTable.h"
#include "fileIO/fileIO.h"
 
int main(void){
	
	struct INPUT input;
	struct OUTPUT output;

	while(1){
		printf("Enter square-length (int): ");
		scanf(" %d", &input.i);		
		printf("Enter operation (+, -, *, /, %%): ");
		scanf(" %c", &input.op);
		printf("swap a, b (y/n): ");
		scanf(" %c", &input.exchange);		
		output.comm = isCommute(input);		
		output.result = calcFunc(input);
		writeTxt(output);
		printf("%s\n%s",output.comm, output.result);		
		printf("Quit? (y/n): ");
		scanf(" %c", &input.quit);		
		if(input.quit == 'y'){
			break;
		}
	}	

	/*
	while(1){
		BACK:	
		printf("Enter square-length (int): ");		
		if (scanf("%d", &input.i) !=1){
			while(getchar()!= '\n');
			printf("Invalid Input\n");
			goto BACK;			
		}
		BACK2:
		printf("Enter operation (+, -, *, /, %%): ");
		

		if((scanf("%c", &input.op) != '+') || (scanf("%c", &input.op) != '-') ||(scanf("%c", &input.op) != '*') || (scanf("%c", &input.op) != '/')||(input.op != '%')){			
			while(getchar()!= '\n');
			printf("Invalid Input\n");
			goto BACK2;	
		}
		BACK3:
		printf("swap a, b (y/n): ");
		
		if((scanf("%c", &input.exchange) != 'Y') || (scanf("%c", &input.exchange) != 'Y')){
			while(getchar()!= '\n');
			printf("Invalid Input\n");
			goto BACK3;	
		}
		
		isCommute(input);
		calcFunc(input);
	}
	*/

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "../structIO/structOutput.h"


void writeTxt(struct OUTPUT output){
	FILE *f = fopen("calc.txt", "w");
	if(f == NULL){
		printf("Error\n");
		exit(1);
	}
	fprintf(f, "%s\n%s", output.comm, output.result);
	fclose(f);
}
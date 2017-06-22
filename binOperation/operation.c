/**
 * choose operation + ,- ,* ,/ , mod(%)
 */


int selectOp(char op, int a, int b){	

	if(op == '*'){
		return a * b;
	}else if(op == '+'){
		return a + b;
	}else if(op == '-'){
		return a - b;
	}else if(op == '/'){
		return a / b;
	}else{
		return a % b;
	}
}


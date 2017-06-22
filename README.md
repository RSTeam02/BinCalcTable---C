# Binary Calculator Table for following Operations (+, -, *, %, /) in C


The task is based on the CalcSpreadSheet project in JS, this is an approach in C-language in command/shell  

app structure:

+ main.c: starts the main app with input requests.

+ binOperation:<br /> 
	=> calcTable.c: returns the generated string table<br />
	=> operation.c: select between +, -, *, / operator
+ exchange:<br />
	=> swap.c: exchange between binary operands<br />
+ fileIO: <br />
	=> fileIO.c: generate textfile of the string output, save as calc.txt.<br />
+ structIO:<br />
	=> structInput.h: creates an input type (instance) for the chosen operator, integer input, swap, quit<br />
	=> structOutput.h: creates an input type (instance) for the commutativity and result<br />

compile with linux gcc e.g.:
~/gcc main.c ./binOperation/calcTable.c ./binOperation/operation.c ./exchange/swap.c ./fileIO/fileIO.c -std=c99 -o calcTable

execute:
./calcTable


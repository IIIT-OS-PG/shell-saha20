#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h> 

#include "functions.h"

// #define clear() printf("\033[H\033[J")
#define MAXCOM 1000 // max number of letters to be supported 
#define MAXLIST 100 // max number of commands to be supported 
using namespace std;
 	
int main() 
{ 
	char inputString[MAXCOM], *parsedArgs[MAXLIST]; 
	char* parsedArgsPiped[MAXLIST]; 
	int status = 0; 
	startShell(); 
	char *line;
	char **args;
	int flag=0;
	while (1) 
	{ 
		// print shell line 
	//	printDir(); 
		// take input 
		cout<<">";
		arrowDetect();
		line = takeInput(); 
		args = splitLine(line);

		flag = checkPipe(args);
		if (flag == 0)
			execute(args);
		else 
		{

			executePipe();
		}

		 // for (int z=0;args[z]!=NULL;z++)			//TO GET THE SIZE OF ARRAY args[z]!=NULL
			// cout<<args[z]<<" zzzz"<<endl;
		// 	cout<<args[z]<<endl;

			// continue; 
		// process 
		// execFlag = processString(inputString, 
		// parsedArgs, parsedArgsPiped); 
		// // execflag returns zero if there is no command 
		// // or it is a builtin command, 
		// // 1 if it is a simple command 
		// // 2 if it is including a pipe. 

		// // execute 
		// if (execFlag == 1) 
		// 	execArgs(parsedArgs); 

		// if (execFlag == 2) 
		// 	execArgsPiped(parsedArgs, parsedArgsPiped); 
	} 
	return 0; 
} 
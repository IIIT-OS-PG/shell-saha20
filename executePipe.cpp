#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include "functions.h"


using namespace std;

void executePipe(char **args,int pipenum)
{
// cout<<pipenum<<"  executepipe  "<<endl;
// for (auto i=0;args[i]!=NULL;i++)
// 	cout<<args[i]<<endl;


    int pipefd[2];  
    pid_t p1; 
    int fdd = 0;
  	while (*args !=NULL)
  	{
    if (pipe(pipefd) < 0)
     { 
        printf("\nPipe could not be initialized"); 
        return; 
     } 
    p1 = fork(); 
    if (p1 < 0)
     { 
        printf("\nCould not fork"); 
        return; 
     } 
  
    if (p1 == 0) 
    { 
        // Child 1 executing.. 
        // It only needs to write at the write end 
        dup2(fdd,0);
        if( *(args+1) !=NULL)
        	dup2(pipefd[1],1);
        close(pipefd[0]); 
        //dup2(pipefd[1], STDOUT_FILENO); 
        close(pipefd[1]); 
  			string formatted_input2[50];
			// auto formatted_input2 = splitLine(args[0]);
			string s(args[0]);
			  int k = rmspacedlmt(s,formatted_input2);
			 execute(formatted_input2,k);	
			 exit(0);
    } 
        else 
        { 
            // parent executing, waiting for two children 
            wait(NULL); 
            close(pipefd[1]); 
            fdd = pipefd[0];
            args ++;
        } 
    } 
} 

//} 
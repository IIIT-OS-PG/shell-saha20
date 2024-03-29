#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 

using namespace std;
//#define clear() printf("\033[H\033[J")
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t\n"
char **splitLine(char *line,char **args)
{
  int bufsize = TOK_BUFSIZE, position = 0;
  //char **tokens = (char**) malloc(bufsize * sizeof(char*));
  char *token;

  char line1[100];
  strcpy(line1,  line);
  //cout<<"line1 : "<<line1<<endl;

  if (!args) 
  {
    fprintf(stderr, "splitLine 1 : allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line1, TOK_DELIM);
  while (token != NULL) 
  {
    args[position] = token;
    position++;

    if (position >= bufsize) 
    {
      bufsize += TOK_BUFSIZE;
      args = (char**) realloc(args, bufsize * sizeof(char*));
      if (!args)
      {
        fprintf(stderr, "splitLine 2 : allocation error\n");
        exit(EXIT_FAILURE);
      }
    }

    token = strtok(NULL, TOK_DELIM);
  }
  args[position] = NULL;

  //for(int i=0;i<position+1;i++)
  for(int i=0;args[i]!=NULL;i++)
  	cout<<"***"<<args[i]<<endl;
  cout<<"//"<<args[0]<<endl;
  return args;
}

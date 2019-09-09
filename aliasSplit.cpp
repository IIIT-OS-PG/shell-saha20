#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h> 
#define TOK_BUFSIZE 64
#define TOK_DELIM " \t"
using namespace std;

char **aliasSplit(char *str)
{
	int bufsize = TOK_BUFSIZE, position = 0;
  char **tokens = (char**) malloc(bufsize * sizeof(char*));
  char *token;
  char line1[100];
  strcpy(line1,  str);
  //char **finalstr = (char**) malloc(bufsize * sizeof(char*));
 // int i;
  // for ( i=1;str[i]!=NULL;i++)
  // 	finalstr[i-1]=str[i];
  // finalstr[i-1]=NULL;


  if (!tokens) 
  {
    fprintf(stderr, "aliasSplit 1 : allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line1, TOK_DELIM);
  for(;token != NULL;token = strtok(NULL, "=")) 
  {
  	if (strcmp(token,"alias")==0)
  		continue;
    tokens[position] = token;
    position++;

    if (position >= bufsize) 
    {
      bufsize += TOK_BUFSIZE;
      tokens = (char**) realloc(tokens, bufsize * sizeof(char*));
      if (!tokens)
      {
        fprintf(stderr, "aliasSplit 2 : allocation error\n");
        exit(EXIT_FAILURE);
      }
    }
	// token = strtok(NULL, "=");
  }
  tokens[position] = NULL;

// for ( i=1;tokens[i]!=NULL;i++)
//   	finalstr[i-1]=tokens[i];
//   finalstr[i-1]=NULL;


  // for(int i=0;i<position+1;i++)
  // 	cout<<tokens[i]<<endl;
  return tokens;
}
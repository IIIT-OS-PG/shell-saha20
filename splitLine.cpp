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
#define TOK_DELIM " \t\r\n\a"
char **splitLine(char *line)
{
  int bufsize = TOK_BUFSIZE, position = 0;
  char **tokens = (char**) malloc(bufsize * sizeof(char*));
  char *token;

  if (!tokens) 
  {
    fprintf(stderr, "splitLine 1 : allocation error\n");
    exit(EXIT_FAILURE);
  }

  token = strtok(line, TOK_DELIM);
  while (token != NULL) 
  {
    tokens[position] = token;
    position++;

    if (position >= bufsize) 
    {
      bufsize += TOK_BUFSIZE;
      tokens = (char**) realloc(tokens, bufsize * sizeof(char*));
      if (!tokens)
      {
        fprintf(stderr, "splitLine 2 : allocation error\n");
        exit(EXIT_FAILURE);
      }
    }

    token = strtok(NULL, TOK_DELIM);
  }
  tokens[position] = NULL;

  // for(int i=0;i<position+1;i++)
  // 	cout<<tokens[i]<<endl;
  return tokens;
}

#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 

using namespace std;
//#define clear() printf("\033[H\033[J")
char *takeInput()
{
string inp;
getline(cin,inp);
char *input = new char[inp.length()+1];
strcpy(input,inp.c_str());
return input;

  // char *line = NULL;
  // size_t bufsize = 0; // have getline allocate a buffer for us
  // getline(&line, &bufsize, stdin);
  // return line;
}
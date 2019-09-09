#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include<readline/readline.h> 
#include<readline/history.h> 
using namespace std;

// #define clear() printf("\033[H\033[J")
// using namespace std;
 extern	map <string,string> ShellMap;
void clear();
void startShell();
string  takeInput();
//char *takeInput();
void printDir() ;
void cd(char **args);
int rmspacedlmt(string line,string args[]);
int dlmt(string line,string args[],char d);
void execute(string args[],int k);
//void execute(char **args);
//int checkPipe(char *args);
void executePipe(char **args,int pipenum);
char **pipeSplit(char *line);
char **aliasSplit(char *str);

//char **splitLine(char *line,char **args);
//void arrowDetect();
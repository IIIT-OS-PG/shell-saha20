// #include<bits/stdc++.h>
// #include<stdio.h> 
// #include<string.h> 
// #include<stdlib.h> 
// #include<unistd.h> 
// #include<sys/types.h> 
// #include<sys/wait.h> 
// #include<readline/readline.h> 
// #include<readline/history.h> 

// #define clear() printf("\033[H\033[J")
// using namespace std;
void clear();
void startShell();
char *takeInput();
void printDir() ;
char **splitLine(char *line);
void execute(char **args);
int checkPipe(char **args);
int executePipe(char **args);
void arrowDetect();
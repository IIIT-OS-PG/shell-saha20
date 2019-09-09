#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 
#include "functions.h"
using namespace std;

void execute(string args[],int k)
{
  if (ShellMap.find(args[0]) != ShellMap.end())
  {
    string ans = ShellMap[args[0]];
    args[0] = ans;
  }

  // vector<char *> argv(args.size() + 1);    // one extra for the null
    char *argv[k+1];int i=0;
      for ( i = 0; i <k; ++i)
      {
           argv[i] = &args[i][0];
      }
      argv[i] = NULL;
      
     //    for (int i=0;i<k;i++)
     // cout<<"argv["<<i<<"] : "<<argv[i]<<endl;



    if (strcmp(argv[0],"cd")==0)
          cd(argv);
    else
    {

  pid_t pid, wpid;
  int status;

  pid = fork();
  if (pid == 0)
   {
    // Child process
    //cout<<argv[0]<<endl;
    if (execvp(argv[0], argv) == -1) 
    {
      cout<<"execute(): Command not found"<<endl;
    }
    exit(EXIT_FAILURE);
  } 
  else if (pid < 0) 
  {
    // Error forking
    perror("execute fork error");
  } 
  else 
  {
    // Parent process
    do 
    {
      wpid = waitpid(pid, &status, WUNTRACED);
    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
  }
}
  // return 1;
}

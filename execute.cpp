#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 

using namespace std;

void execute(char **args)
{
  pid_t pid, wpid;
  int status;

  pid = fork();
  if (pid == 0)
   {
    // Child process
    if (execvp(args[0], args) == -1) 
    {
      perror("lsh");
    }
    exit(EXIT_FAILURE);
  } 
  else if (pid < 0) 
  {
    // Error forking
    perror("lsh");
  } 
  else 
  {
    // Parent process
    do 
    {
      wpid = waitpid(pid, &status, WUNTRACED);
    } while (!WIFEXITED(status) && !WIFSIGNALED(status));
  }

  // return 1;
}

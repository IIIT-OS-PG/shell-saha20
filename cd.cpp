#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
void cd(char **args)
{
  if (args[1] == NULL)
   {
    fprintf(stderr, "cd: expected argument to \"cd\"\n");
   } 
   else 
   {
    if (chdir(args[1]) != 0) 
    {
      perror("from cd function");
    }
   }
}
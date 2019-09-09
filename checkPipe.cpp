#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 

using namespace std;

int checkPipe(char *args)
{
	int flag = 0;
	for (int z=0;args[z]!=NULL;z++)
		{
			if (args[z] == '|')
			{
				flag ++;
			}
				// executePipe(args);
		}
		return flag;
}
#include<bits/stdc++.h>
using namespace std;

int rmspacedlmt(string line,string args[])
{
int k=0;
for(int i=0;i<line.size();i++)
{
	if (((line[i] == ' ') || (line[i] == '\t')) && (i<line.size()))
		{
			i++;
		}
	if  ((line[i] != ' ') && (line[i] != '\t')  && (i<line.size()))
		{
			while ( (line[i] != ' ') && (line[i] != '\t')  && (i<line.size()))
						args[k] += line[i++];
			//args[k] += '\0';
			k++;
		}
}
return k;
}
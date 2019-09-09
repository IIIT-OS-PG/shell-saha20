#include<bits/stdc++.h>
using namespace std;

int dlmt(string line,string args[],char d)
{
int k=0;
for(int i=0;i<line.size();i++)
{
	if (line[i] != d)
	{
		while ((line[i] != d) && (i<line.size()))
					args[k] += line[i++];
		//args[k] += '\0';
		k++;
	}
}
return k;
}
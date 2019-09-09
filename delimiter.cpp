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
			args[k] += '\0';
			k++;
		}
}
return k;
}



int dlmt(string line,string args[],char d)
{
int k=0;
for(int i=0;i<line.size();i++)
{
	if (line[i] != d)
	{
		while ((line[i] != d) && (i<line.size()))
					args[k] += line[i++];
		args[k] += '\0';
		k++;
	}
}
return k;
}


int main()
{
	string inp; 	
	getline(cin,inp);
	string args[100];
	int k =rmspacedlmt(inp,args);
	//int k = dlmt(inp,args,'|');
	cout<<k<<endl;
		for (int i=0;i<k;i++)
		cout<<args[i]<<endl;
}



#include "functions.h"


// #define clear() printf("\033[H\033[J")
// #define MAXCOM 1000 // max number of letters to be supported 
// #define MAXLIST 100 // max number of commands to be supported 
using namespace std;

 	map <string,string> ShellMap;



 // for (int z=0;args[z]!=NULL;z++)			//TO GET THE SIZE OF ARRAY args[z]!=NULL
			// cout<<args[z]<<" zzzz"<<endl;


int main() 
{ 
	//char inputString[MAXCOM], *parsedArgs[MAXLIST]; 
	//char* parsedArgsPiped[MAXLIST]; 
	//int status = 0; 
	startShell(); 
	
	// char *line;
	// char **args = (char**) malloc(100 * sizeof(char*));
	//char **args;
	int pipenum=0,k=0;
	while (1) 
	{ 

			string line;
			string args[100];

		// print shell line 
	//	printDir(); 
		// take input 
		cout<<"$ ";
		//arrowDetect();
		line = takeInput(); 

		if ((line.compare("@#$")) == 0) 
			continue;

		k = rmspacedlmt(line,args);
		if(k==0)
			continue;


		if((args[0].compare("exit")) == 0)
				break;

		if((args[0].compare("alias")) == 0) 
		 {
		 	string s[50],ans[50];
		 	int x = dlmt(line,s,'=');
		 	int k1 = rmspacedlmt(s[0],ans);
		 	//cout<<ans[1]<<"\t"<<s[1]<<endl;

		 	ShellMap [ans[1]] = s[1];
		 	// cout<<"Printing map"<<endl;
		 	// for(auto z=ShellMap.begin(); z!=ShellMap.end() ;z++)
		 	// 	cout<<z->first<<"\t"<<z->second<<endl;
			continue;
		 }
		 string s[50];int k1=0;
		 if (( k1=dlmt(line,s,'|')) > 1)
		 {
		 	pipenum = k1 -1;
		 	// vector<char *> argv(s.size() + 1);    // one extra for the null
		 	char *argv[k1+1];int i=0;
			for ( i = 0; i < k1; ++i)
			{
   				 argv[i] = &s[i][0];
			}
			argv[i] = NULL;
		 	executePipe(argv,pipenum);
		 }
		 else 
		 {
		 	execute(args,k);
		 	// for (int p=0;p<k;p++)
		 	// 	cout<<args[p]<<endl;
		//  	cout<<k<<endl;
		//  	for (int i=0;i<k;i++)
		// cout<<"args[i] : "<<args[i]<<endl;
		 }



		// if (args[0] == NULL)
		// 	continue;

		// // for(int z=0;args[z]!=NULL;z++)
		// // cout<<"\n*****\n"<< args[z]<<"\n******\n";

		// if (strcmp(args[0],"cd")==0)
		// 	cd(args);
		// else if (strcmp(args[0],"alias")==0)
		// {
		// 	cout<<"hi"<<endl;
		// 	char **str = aliasSplit(line);
		// 	ShellMap[str[0]] = str[1];
		// }
		// else
		// {

		// if ((pipenum = checkPipe(line)))
		// {
		// 	char **str = pipeSplit(line);
		// 	executePipe(str,pipenum);
		// }
		// else
		// 	execute(args);
		// }
		// free(line);
  //   free(args);
	} 

	return 0; 
} 
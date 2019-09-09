#include<bits/stdc++.h>
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h> 
#include<unistd.h> 
#include<sys/types.h> 
#include<sys/wait.h> 

using namespace std;
//#define clear() printf("\033[H\033[J")
string  takeInput()
{
	string inp; 	
	getline(cin,inp);
	if(inp.empty())
		return "@#$";
	else
		return inp;
}
// 	//int flag=0;
	//string args[100];
// string inp;
// getline(cin,inp);
// // for(auto i=0;i<inp.size();i++)
// // 	if((inp[i] != ' ') || (inp[i] != '\t'))
// // 		flag=1;
// cout<<"takeinput"<<endl;
// cout<<inp<<endl;
// // cout<<"hi "<<inp<<endl;
// // else
// // cout<<"not null"<<endl;
// char *input = new char[inp.length()+1];
// strcpy(input,inp.c_str());
// //char *input = (char *)inp.c_str();
// cout<<"*** "<<input<<" ***"<<endl;

// return input;

//   // char *line = NULL;
  // size_t bufsize = 0; // have getline allocate a buffer for us
  // getline(&line, &bufsize, stdin);
  // return line;

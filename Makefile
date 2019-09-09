CC=g++

CFLAGS=-c -Wall

all: hello

hello : main.o clear.o startShell.o takeInput.o printDir.o rmspacedlmt.o  dlmt.o  cd.o splitLine.o execute.o\
		executePipe.o checkPipe.o pipeSplit.o aliasSplit.o
		$(CC)  main.o clear.o startShell.o takeInput.o printDir.o rmspacedlmt.o  dlmt.o  cd.o splitLine.o execute.o\
			 executePipe.o checkPipe.o pipeSplit.o aliasSplit.o -o hello

main.o : main.cpp
		$(CC) $(CFLAGS) main.cpp

clear.o : clear.cpp
		$(CC) $(CFLAGS) clear.cpp 

startShell.o : startShell.cpp
		$(CC) $(CFLAGS) startShell.cpp

takeInput.o : takeInput.cpp
		$(CC) $(CFLAGS) takeInput.cpp

rmspacedlmt.o : rmspacedlmt.cpp
		$(CC) $(CFLAGS) rmspacedlmt.cpp

dlmt.o : dlmt.cpp
		$(CC) $(CFLAGS) dlmt.cpp

printDir.o : printDir.cpp
		$(CC) $(CFLAGS) printDir.cpp

cd.o : cd.cpp
		$(CC) $(CFLAGS) cd.cpp

splitLine.o : splitLine.cpp
		$(CC) $(CFLAGS) splitLine.cpp

execute.o : execute.cpp
		$(CC) $(CFLAGS) execute.cpp 

executePipe.o : executePipe.cpp
		$(CC) $(CFLAGS) executePipe.cpp 

checkPipe.o : checkPipe.cpp
		$(CC) $(CFLAGS) checkPipe.cpp 

pipeSplit.o : pipeSplit.cpp
		$(CC) $(CFLAGS) pipeSplit.cpp 

aliasSplit.o : aliasSplit.cpp
		$(CC) $(CFLAGS) aliasSplit.cpp 

		
clean :
		rm -rf *o hello
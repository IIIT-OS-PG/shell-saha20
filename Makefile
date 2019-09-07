CC=g++

CFLAGS=-c -Wall

all: hello

hello : main.o clear.o startShell.o takeInput.o printDir.o splitLine.o execute.o arrowDetect.o executePipe.o
		$(CC)  main.o clear.o startShell.o takeInput.o printDir.o splitLine.o execute.o executePipe.o arrowDetect.o -o hello

main.o : main.cpp
		$(CC) $(CFLAGS) main.cpp

clear.o : clear.cpp
		$(CC) $(CFLAGS) clear.cpp 

startShell.o : startShell.cpp
		$(CC) $(CFLAGS) startShell.cpp

takeInput.o : takeInput.cpp
		$(CC) $(CFLAGS) takeInput.cpp

printDir.o : printDir.cpp
		$(CC) $(CFLAGS) printDir.cpp

splitLine.o : splitLine.cpp
		$(CC) $(CFLAGS) splitLine.cpp

execute.o : execute.cpp
		$(CC) $(CFLAGS) execute.cpp 

arrowDetect.o : arrowDetect.cpp
		$(CC) $(CFLAGS) arrowDetect.cpp 

executePipe.o : executePipe.cpp
		$(CC) $(CFLAGS) executePipe.cpp 

		executePipe
clean :
		rm -rf *o hello
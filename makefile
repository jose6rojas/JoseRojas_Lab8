main:	Lab8.o Binario.o
	g++ Lab8.o Binario.o -o Lab8

Lab8.o:	Lab8.cpp Binario.cpp
	g++ -c Lab8.cpp

Binario.o:	Binario.h Binario.cpp
	g++ -c Binario.cpp

Clean:
	rm -f *.o Lab8
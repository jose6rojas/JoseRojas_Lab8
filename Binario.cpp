// Binario.cpp

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include "Binario.h"

using namespace std;

Binario::Binario()
{
	// elementos = new int[4];
	int elem1 = 0, elem2 = 0, elem3 = 0, elem4 = 0;
	for (int i = 0; i < 4; i++)
	{
		if(i == 0)
		{
			elem1 = rand() % 2;
			this -> setElem(0, elem1);
		}
		else if(i == 1)
		{
			elem2 = rand() % 2;
			this -> setElem(1, elem2);
		}
		else if(i == 2)
		{
			elem3 = rand() % 2;
			this -> setElem(2, elem3);
		}
		else // i == 3
		{
			elem4 = rand() % 2;
			this -> setElem(3, elem4);
		}
	}
}

void Binario::setElem(int i, int e)
{
	elementos[i] = e;
}

int Binario::getElem(int i)
{
	return elementos[i];
}

void Binario::toString()
{
	cout << "Elementos" << endl;
	for(int i = 0; i < 4; i++)
		cout << "Binario[" << i << "] = " << elementos[i] << endl;
}
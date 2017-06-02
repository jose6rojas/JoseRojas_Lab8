// Binario.h

#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

#ifndef BINARIO_H
#define BINARIO_H

class Binario
{
	private:
		int elementos[4];

	public:
		Binario();

		void setElem(int, int); // asigna un elemento de acuerdo la posicion
		int getElem(int); // retorna un elemento de acuerdo a la posicion

		void toString();

		// Disyuncion
		Binario* operator+(Binario* B)
		{
			Binario* retVal = new Binario();

			int cont = 0;
			for(int i = 0; i < 4; i++)
			{
				if((this -> getElem(i) == 1) && (B -> getElem(i) == 1)) // V y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 1) && (B -> getElem(i) == 0)) // V y F
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 0) && (B -> getElem(i) == 1)) // F y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else // ((this -> getElem(i) == 0) && (B -> getElem(i) == 0)) // F y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
			}
			return retVal;
		}

		// Conjuncion
		Binario* operator-(Binario* B)
		{
			Binario* retVal = new Binario();

			int cont = 0;
			for(int i = 0; i < 4; i++)
			{
				if((this -> getElem(i) == 1) && (B -> getElem(i) == 1)) // V y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 1) && (B -> getElem(i) == 0)) // V y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else if((this -> getElem(i) == 0) && (B -> getElem(i) == 1)) // F y V
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else // ((this -> getElem(i) == 0) && (B -> getElem(i) == 0)) // F y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
			}
			return retVal;
		}

		// Implicacion
		Binario* operator*(Binario* B)
		{
			Binario* retVal = new Binario();

			int cont = 0;
			for(int i = 0; i < 4; i++)
			{
				if((this -> getElem(i) == 1) && (B -> getElem(i) == 1)) // V y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 1) && (B -> getElem(i) == 0)) // V y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else if((this -> getElem(i) == 0) && (B -> getElem(i) == 1)) // F y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else // ((this -> getElem(i) == 0) && (B -> getElem(i) == 0)) // F y F
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
			}
			return retVal;
		}

		// Doble Implicacion
		Binario* operator/(Binario* B)
		{
			Binario* retVal = new Binario();

			int cont = 0;
			for(int i = 0; i < 4; i++)
			{
				if((this -> getElem(i) == 1) && (B -> getElem(i) == 1)) // V y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 1) && (B -> getElem(i) == 0)) // V y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else if((this -> getElem(i) == 0) && (B -> getElem(i) == 1)) // F y V
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else // ((this -> getElem(i) == 0) && (B -> getElem(i) == 0)) // F y F
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
			}
			return retVal;
		}

		// Disyuncion Exclusiva
		Binario* operator^(Binario* B)
		{
			Binario* retVal = new Binario();

			int cont = 0;
			for(int i = 0; i < 4; i++)
			{
				if((this -> getElem(i) == 1) && (B -> getElem(i) == 1)) // V y V
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
				else if((this -> getElem(i) == 1) && (B -> getElem(i) == 0)) // V y F
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else if((this -> getElem(i) == 0) && (B -> getElem(i) == 1)) // F y V
				{
					retVal -> setElem(cont, 1); // V
					cont++;
				}
				else // ((this -> getElem(i) == 0) && (B -> getElem(i) == 0)) // F y F
				{
					retVal -> setElem(cont, 0); // F
					cont++;
				}
			}
			return retVal;
		}
};

#endif
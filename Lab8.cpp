// viernes, 2 de junio de 2017
// Laboratorio 8 - Programacion III
// Jose Carlos Rojas Herrera - 11541234

#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <vector>
#include "Binario.h"

using namespace std;

int main(int argc, char const *argv[])
{
	srand(time(0));

	vector<Binario*> binarios;

	int opcion = 0;
	while(opcion != 7)
	{
		cout << "Lab. 8" << endl;
		cout << "1. Agregar un Binario" << endl;
		cout << "2. Disyuncion (+)" << endl;
		cout << "3. Conjuncion (-)" << endl;
		cout << "4. Implicacion (*)" << endl;
		cout << "5. Doble Implicacion (/)" << endl;
		cout << "6. Disyuncion Exclusiva (^)" << endl;
		cout << "7. Salir" << endl;
		cout << "Escoja una opcion: ";
		cin >> opcion;

		if(opcion == 1) // Agregar un Binario
		{
			Binario* B = new Binario();
			cout << endl;
			B -> toString();
			cout << endl;
			binarios.push_back(B);
			cout << "Binario agregado correctamente." << endl << endl;
		}
		else if(opcion == 2) // Disyuncion (+)
		{
			if(binarios.size() < 2)
			{
				cout << endl << "Deben existir por lo menos 2 Binarios para realizar esta operacion." << endl << endl;
			}
			else
			{
				// Lista a los Binarios
				cout << endl;
				for (int i = 0; i < binarios.size(); i++)
				{
					cout << "Binario #" << i << endl;
					binarios[i] -> toString();
					cout << endl;
				}

				int a, b;
				cout << "Escoja un Binario: ";
				cin >> a;
				if(a < 0 || a >= binarios.size())
				{
					cout << endl << "Debe escoger una opcion valida." << endl << endl;
				}
				else
				{
					cout << "Escoja otro Binario: ";
					cin >> b;
					if(b < 0 || b >= binarios.size())
					{
						cout << endl << "Debe escoger una opcion valida." << endl << endl;
					}
					else
					{
						Binario* C;
						C = *(binarios[a]) + binarios[b];
						cout << endl << "El resultado de la Disyuncion (+) es:" << endl;
						C -> toString();
						cout << endl;
						delete C;
					}
				}
			}
		}
		else if(opcion == 3) // Conjuncion (-)
		{
			if(binarios.size() < 2)
			{
				cout << endl << "Deben existir por lo menos 2 Binarios para realizar esta operacion." << endl << endl;
			}
			else
			{
				// Lista a los Binarios
				cout << endl;
				for (int i = 0; i < binarios.size(); i++)
				{
					cout << "Binario #" << i << endl;
					binarios[i] -> toString();
					cout << endl;
				}

				int a, b;
				cout << "Escoja un Binario: ";
				cin >> a;
				if(a < 0 || a >= binarios.size())
				{
					cout << endl << "Debe escoger una opcion valida." << endl << endl;
				}
				else
				{
					cout << "Escoja otro Binario: ";
					cin >> b;
					if(b < 0 || b >= binarios.size())
					{
						cout << endl << "Debe escoger una opcion valida." << endl << endl;
					}
					else
					{
						Binario* C;
						C = *(binarios[a]) - binarios[b];
						cout << endl << "El resultado de la Conjuncion (-) es:" << endl;
						C -> toString();
						cout << endl;
						delete C;
					}
				}
			}
		}
		else if(opcion == 4) // Implicacion (*)
		{
			if(binarios.size() < 2)
			{
				cout << endl << "Deben existir por lo menos 2 Binarios para realizar esta operacion." << endl << endl;
			}
			else
			{
				// Lista a los Binarios
				cout << endl;
				for (int i = 0; i < binarios.size(); i++)
				{
					cout << "Binario #" << i << endl;
					binarios[i] -> toString();
					cout << endl;
				}

				int a, b;
				cout << "Escoja un Binario: ";
				cin >> a;
				if(a < 0 || a >= binarios.size())
				{
					cout << endl << "Debe escoger una opcion valida." << endl << endl;
				}
				else
				{
					cout << "Escoja otro Binario: ";
					cin >> b;
					if(b < 0 || b >= binarios.size())
					{
						cout << endl << "Debe escoger una opcion valida." << endl << endl;
					}
					else
					{
						Binario* C;
						C = *(binarios[a]) * binarios[b];
						cout << endl << "El resultado de la Implicacion (*) es:" << endl;
						C -> toString();
						cout << endl;
						delete C;
					}
				}
			}
		}
		else if(opcion == 5) // Doble Implicacion (/)
		{
			if(binarios.size() < 2)
			{
				cout << endl << "Deben existir por lo menos 2 Binarios para realizar esta operacion." << endl << endl;
			}
			else
			{
				// Lista a los Binarios
				cout << endl;
				for (int i = 0; i < binarios.size(); i++)
				{
					cout << "Binario #" << i << endl;
					binarios[i] -> toString();
					cout << endl;
				}

				int a, b;
				cout << "Escoja un Binario: ";
				cin >> a;
				if(a < 0 || a >= binarios.size())
				{
					cout << endl << "Debe escoger una opcion valida." << endl << endl;
				}
				else
				{
					cout << "Escoja otro Binario: ";
					cin >> b;
					if(b < 0 || b >= binarios.size())
					{
						cout << endl << "Debe escoger una opcion valida." << endl << endl;
					}
					else
					{
						Binario* C;
						C = *(binarios[a]) / binarios[b];
						cout << endl << "El resultado de la Doble Implicacion (/) es:" << endl;
						C -> toString();
						cout << endl;
						delete C;
					}
				}
			}
		}
		else if(opcion == 6) // Disyuncion Exclusiva (^)
		{
			if(binarios.size() < 2)
			{
				cout << endl << "Deben existir por lo menos 2 Binarios para realizar esta operacion." << endl << endl;
			}
			else
			{
				// Lista a los Binarios
				cout << endl;
				for (int i = 0; i < binarios.size(); i++)
				{
					cout << "Binario #" << i << endl;
					binarios[i] -> toString();
					cout << endl;
				}

				int a, b;
				cout << "Escoja un Binario: ";
				cin >> a;
				if(a < 0 || a >= binarios.size())
				{
					cout << endl << "Debe escoger una opcion valida." << endl << endl;
				}
				else
				{
					cout << "Escoja otro Binario: ";
					cin >> b;
					if(b < 0 || b >= binarios.size())
					{
						cout << endl << "Debe escoger una opcion valida." << endl << endl;
					}
					else
					{
						Binario* C;
						C = *(binarios[a]) ^ binarios[b];
						cout << endl << "El resultado de la Disyuncion Exclusiva (^) es:" << endl;
						C -> toString();
						cout << endl;
						delete C;
					}
				}
			}
		}
		else if(opcion == 7) { }
		else
		{
			cout << endl << "Debe escoger una opcion valida." << endl << endl;
		}
	}

	// Limpia el vector de Binario
	for (int i = 0; i < binarios.size(); i++)
	{
		delete binarios[i];
	}
	binarios.clear();

	return 0;
}
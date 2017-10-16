/*********************************************************
Materia: Gráficas Computacionales
Fecha: 16 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/
#include <iostream>
using namespace std;

int main()
{

	int n;
	int c;
	int cont[100];
	cont[0] = 0;
	cont[1] = 1;

	cout << endl << "Este programa imprime una serie de fibonacci de n valores" << endl;
	cout << endl << "Introduzca un numero n" << endl;
	cin >> n;
	for (int c = 2; c < n; c++)
	{
		cont[c] = cont[c - 1] + cont[c - 2];
	}
		for (int c= 0; c<n; c++)
		{
			cout << cont[c]<<"  ";
		}
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
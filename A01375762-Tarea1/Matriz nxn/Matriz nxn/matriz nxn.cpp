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
	int cont;
	int inc;

	cout << endl << "Este programa imprime una matriz nxn de estrellas (*)" << endl;
	cout << endl << "Introduzca un numero n de estrellas (*)" << endl;
	cin >> n;
	for (cont = 0; cont < n; cont++)
	{
		cout << "    ";
		for (inc = 0; inc <n; inc++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
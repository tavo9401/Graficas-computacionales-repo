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
	int inc;

	cout << endl << "Este programa imprime un numero n de estrellas (*)" << endl;
	cout << endl << "Intruduzca un numero n de estrellas (*)" << endl;
	cin >> n;
		cout << "    ";
		for (inc = 0; inc <n; inc++)
		{
			cout << "*";
		}
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
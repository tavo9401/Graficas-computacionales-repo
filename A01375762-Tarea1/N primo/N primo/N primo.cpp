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
	bool nprimo = true;

	cout << endl << "Este programa valora si un numero es primo o no" << endl;
	cout << endl << "Introduzca un numero n" << endl;
	cin >> n;
	for (int cont = 2; cont < n && nprimo == true; cont++)
		if (n%cont == 0)
			nprimo = false;
	if (nprimo == false)
	{
		cout << endl<<"El numero " << n << " NO es PRIMO :(";
		}
	else
		cout << endl<<"El numero " << n << " es PRIMO :D";
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
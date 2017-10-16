/*********************************************************
Materia: Gráficas Computacionales
Fecha: 16 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/
#include <iostream>
using namespace std;

int main()
{

	int bas=5;
	int alt=3;
	int p;
	cout << endl << "Este programa imprime el perimetro de un rectangulo con base " << bas << " y altura " << alt << endl << endl;
	p = bas*alt;
	cout << "PERIMETRO=" << p;
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
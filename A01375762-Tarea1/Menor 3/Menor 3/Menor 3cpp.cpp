/*********************************************************
Materia: Gráficas Computacionales
Fecha: 16 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/
#include <iostream>
using namespace std;

int main()
{

	int num1 = 5;
	int num2 = 9;
	int num3 = 1;
	cout << endl << "Este programa imprime el numero mayor entre 5 9 y 1" << endl << endl;
	if (num1< num2 && num1 < num3) {
		cout << "El numero menor es " << num1;
	}
	else {
		if (num2< num1 && num2 < num3) {
			cout << "El numero menor es " << num2;
		}
		else {
			cout << "El numero menor es " << num3;
		}
	}
	cin.get();
	cout << endl << endl << endl << "Presione ENTER para salir";
	cin.get();
	return 0;
}
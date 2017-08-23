/*********************************************************
Materia: Gráficas Computacionales
Fecha: 16 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/

#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	cout << "Hola, mundo"<<endl;
	Circle circulo(5,"Blue");
	cout << circulo.GetRadious()<< endl;
	cout << circulo.GetColor() << endl;
	cin.get();
	return 0;
}

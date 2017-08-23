/*********************************************************
Materia: Gráficas Computacionales
Fecha: 23 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/

#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	cout << "Este programa calcula el area y el perimetro de un rectangulo";
	Rectangle rectangulo(10.0,5.0);
	cout <<" de base "<< rectangulo.GetWidth();
	cout <<" y altura "<< rectangulo.GetHeight();
	cout <<endl<<endl<<"Area= " << rectangulo.GetArea();
	cout << endl << "Perimetro= " << rectangulo.GetPerimeter();
	cin.get();
	return 0;
}

/*********************************************************
Materia: Gráficas Computacionales
Fecha: 16 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/

#include <iostream>
using namespace std;

int main()
{
	{
		float bas = 5.0;
		float alt = 3.0;
		float a;
		cout << endl << "Este programa imprime el area de un triangulo con base " << bas << " y altura " << alt << endl << endl;
		a = (bas*alt) / 2;
		cout << "AREA=" << a;
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

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
			for (inc = 0; inc < n; inc++)
			{
				cout << "*";
			}
			cout << endl;
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int num1 = 5;
		int num2 = 9;
		int num3 = 1;
		cout << endl << "Este programa imprime el numero mayor entre 5 9 y 1" << endl << endl;
		if (num1 > num2 && num1 > num3) {
			cout << "El numero mayor es " << num1;
		}
		else {
			if (num2 > num1 && num2 > num3) {
				cout << "El numero mayor es " << num2;
			}
			else {
				cout << "El numero mayor es " << num3;
			}
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int num1 = 5;
		int num2 = 9;
		int num3 = 1;
		cout << endl << "Este programa imprime el numero menor entre 5 9 y 1" << endl << endl;
		if (num1 < num2 && num1 < num3) {
			cout << "El numero menor es " << num1;
		}
		else {
			if (num2 < num1 && num2 < num3) {
				cout << "El numero menor es " << num2;
			}
			else {
				cout << "El numero menor es " << num3;
			}
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int n;
		int inc;

		cout << endl << "Este programa imprime un numero n de estrellas (*)" << endl;
		cout << endl << "Intruduzca un numero n de estrellas (*)" << endl;
		cin >> n;
		cout << "    ";
		for (inc = 0; inc < n; inc++)
		{
			cout << "*";
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

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
			cout << endl << "El numero " << n << " NO es PRIMO :(";
		}
		else
			cout << endl << "El numero " << n << " es PRIMO :D";
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int bas = 5;
		int alt = 3;
		int p;
		cout << endl << "Este programa imprime el perimetro de un rectangulo con base " << bas << " y altura " << alt << endl << endl;
		p = bas*alt;
		cout << "PERIMETRO=" << p;
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int n;
		int cont;
		int inc;

		cout << endl << "Este programa imprime una piramide de estrellas (*)" << endl;
		cout << endl << "Intruduzca un numero n de estrellas (*)" << endl;
		cin >> n;
		for (cont = 0; cont < n; cont++)
		{
			cout << "    ";
			for (inc = 0; inc < cont + 1; inc++)
			{
				cout << "*";
			}
			cout << endl;
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	{
		int n;
		int cont;
		int inc;

		cout << endl << "Este programa imprime una piramide de estrellas (*)" << endl;
		cout << endl << "Intruduzca un numero n de estrellas (*)" << endl;
		cin >> n;
		for (cont = 0; cont < n; cont++)
		{
			cout << "    ";
			for (inc = 0; inc < cont + 1; inc++)
			{
				cout << "*";
			}
			cout << endl;
		}
		for (cont = n - 1; cont > 0; cont--)
		{
			cout << "    ";
			for (inc = cont; inc > 0; inc--)
			{
				cout << "*";
			}
			cout << endl;
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

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
		for (int c = 0; c < n; c++)
		{
			cout << cont[c] << "  ";
		}
		cin.get();
		cout << endl << endl << endl << "Presione ENTER para salir";
		cin.get();
	}

	return 0;
}
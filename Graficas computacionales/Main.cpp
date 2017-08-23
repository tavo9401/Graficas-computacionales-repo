/*********************************************************
Materia: Gráficas Computacionales
Fecha: 23 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/

#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee empleado(1375762,"Octavio","Valencia",30000);
	cout <<"Nombre del empleado: "<< empleado.GetName()<<endl;
	cout << "Salario anual: " << empleado.GetAnnualSalary() << endl;
	cout << "Se te ha aumentado a un salario de: " << empleado.RaiseSalary(50)<<endl<<endl;
	cout << "Resumen: "<<empleado.Print();
	cin.get();
	return 0;
}

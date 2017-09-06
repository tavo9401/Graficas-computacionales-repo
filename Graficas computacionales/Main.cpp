/*********************************************************
Materia: Gr�ficas Computacionales
Fecha: 16 de agosto del 2017
Fecha: 23 de agosto del 2017
Autor: A01375762 Octavio Adrian Valencia Ballesteros
*********************************************************/

#include "InputFile.h"
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char*argv[]) 
{
	std::string filename = "Prueba.txt";
	InputFile myFile;
	myFile.Read(filename);
	std::string contents = myFile.GetContents();

	std::cout << "Contents:" << contents << std::endl;

	cin.get();
	return 0;

}
#include"InputFile.h"
#include<iostream>
#include <fstream>
#include <sstream>
using namespace std;

std::string InputFile::GetContents()
{
	return _contents;
}

bool InputFile::Read(std::string filename)
{
	ifstream archivo(filename);

	if (archivo.is_open())
		return false;
	else
	{
		std::stringstream filebuffer;
		filebuffer << archivo.rdbuf();
		std::string _contents = filebuffer.str();
		return true;
	}

	return 0;
}

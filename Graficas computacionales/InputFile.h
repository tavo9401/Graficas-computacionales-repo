#pragma once
#include<string>


class InputFile
{
public:

	std::string GetContents();

	bool Read(std::string filename);

private:
	std::string _contents;

};


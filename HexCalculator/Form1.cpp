#include "pch.h"
#include "Form1.h"
#include <string>
#include <msclr\marshal_cppstd.h>

using namespace System;
using namespace msclr::interop;



System::String^ Addition(System::String^ first, System::String^ second)
{
	std::string inpStrN1 = marshal_as<std::string>(first);
	std::string inpStrN2 = marshal_as<std::string>(second);

	unsigned int n1, n2;

	std::stringstream ss1;
	std::stringstream ss2;

	ss1 << std::hex << inpStrN1;
	ss1 >> std::hex >> n1;
	ss2 << std::hex << inpStrN2;
	ss2 >> std::hex >> n2;

	unsigned int res = n1 + n2;

	std::stringstream stream;
	stream << std::hex << res;
	std::string result(stream.str());

		return gcnew String(result.c_str());;
}

System::String^ Substraction(System::String^ first, System::String^ second)
{
	std::string inpStrN1 = marshal_as<std::string>(first);
	std::string inpStrN2 = marshal_as<std::string>(second);

	unsigned int n1, n2;

	std::stringstream ss1;
	std::stringstream ss2;

	ss1 << std::hex << inpStrN1;
	ss1 >> std::hex >> n1;
	ss2 << std::hex << inpStrN2;
	ss2 >> std::hex >> n2;

	unsigned int res = n1 - n2;

	std::stringstream stream;
	stream << std::hex << res;
	std::string result(stream.str());

	return gcnew String(result.c_str());;
}

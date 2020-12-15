#include "Student.h"
#include <fstream>

void Student::SetStatusStudent(bool status)
{
	if (status == 1)
		_status = 1;
	else
		_status = 0;
}

void Student::SetStipendionStudent(bool stipendion)
{
	if (stipendion == 1)
		_stipendion = 1;
	else
		_stipendion = 0;
}

void Student::SetMark(short int mark)
{
	this->_mark = mark;
}
void Student::GetStudent(std::ifstream& in)
{
	std::string s;
	std::getline(in, s);
	std::getline(in, _fio);
	std::getline(in, _birthDate);
	std::getline(in, _adress);
	in >> _status >> _stipendion >> _mark;
}

const std::string* Student::GetFio()
{
	return _fioc;
}

const std::string* Student::GetBirthDate()
{
	return _birthDatec;
}

const std::string* Student::GetAdress()
{
	return _adressc;
}

bool Student::GetStatus()
{
	return _status;
}

bool Student::GetStipendion()
{
	return _stipendion;
}

short int Student::GetMark()
{
	return _mark;
}

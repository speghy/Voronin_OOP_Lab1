#include "Instityte.h"
#include <fstream>
#include <cstdlib>
#include <ctime>

void Institute::ReadStudentList(std::string path)
{
	try {
		std::ifstream in(path);
		if (!in)
			throw 1;
		in >> this->_studentCounter;
		_studentArr = new Student[_studentCounter];
		for (int i = 0; i < _studentCounter; i++)
			_studentArr[i].GetStudent(in);
	}
	catch (int e)
	{
		std::cout << "oshibka vvoda" << "\n";
	}
}

void Institute::ExamStudents()
{
	for (int i = 0; i < _studentCounter; i++)
	{
		short int mark = unsigned int(rand()%4+2);
		_studentArr[i].SetMark(mark);
		
	}
}

void Institute::ShowStudentInfo()
{
	for (int i = 0; i < _studentCounter; i++)
	{
		std::cout << *_studentArr[i].GetFio() << "\n"; 
		std::cout << *_studentArr[i].GetBirthDate() << "\n";
		std::cout << *_studentArr[i].GetAdress() << "\n";
		std::cout << "got mark: " << _studentArr[i].GetMark() << "\n";
		if (_studentArr[i].GetStatus() == 1)
			std::cout << "and was not deducted." << "\n";
		else
			std::cout << "and deducted." << "\n";
		if (_studentArr[i].GetStipendion() == 1)
			std::cout << "have a stipendion." << "\n";
		else
			std::cout << "have no stipendion." << "\n";
	}
}


void Institute::MakeOrder(std::string path)
{
	std::ofstream of(path);
	for (int i = 0; i < _studentCounter; i++)
	{
		short int mark;
		mark = _studentArr[i].GetMark();
		if (mark > 3)
		{
			_studentArr[i].SetStipendionStudent(1);
		}
		else
		{
			_studentArr[i].SetStipendionStudent(0);
		}
		if (mark > 2)
		{
			_studentArr[i].SetStatusStudent(1);
		}
		else
		{
			_studentArr[i].SetStatusStudent(0);
		}
		of << *_studentArr[i].GetFio() << "\n";
		of << "got mark: " << _studentArr[i].GetMark()<<"\n";
		if (_studentArr[i].GetStatus() == 1)
			of << "and was not deducted." << "\n";
		else
			of << "and deducted." << "\n";
		if (_studentArr[i].GetStipendion() == 1)
			of << "have a stipendion." << "\n";
		else
			of << "have no stipendion." << "\n";
	}
}

Institute::~Institute()
{
	delete[] _studentArr;
	_studentCounter = 0;
}

#include "ConsoleIterator.h"


ConsoleIterator::ConsoleIterator()
{

}

void ConsoleIterator::InitVork()
{
	std::cout << "Welcome to the Instityte Examing programm." << "\n";
	std::cout << "Made by Voronin Artyom" << "\n";
	std::cout << "Insert path to the students list!"<<"\n";
	std::string path1;
	std:: cin >> path1;
	_ictib.ReadStudentList(path1);
	char ex='n';
	while (ex != 'y')
	{


		std::cout << "Do you want to exam students (y/n)?" << "\n";
		char YN;
		std::cin >> YN;
		if (YN == 'y')
		{
			_ictib.ExamStudents();
			std::cout << "students examed" << "\n";
		}
		std::cout << "Do you want to show students information? (y/n)?" << "\n";
		char YN2;
		std::cin >> YN2;
		if (YN2 == 'y')
		{
			_ictib.ShowStudentInfo();
		}
		std::cout << "Do you want to stop examing? (y/n)?" << "\n";
		std::cin >> ex;
	}
	std::cout << "Insert path to the output list and get "<<"\n";
	std::string path2;
	std::cin >> path2;
	_ictib.MakeOrder(path2);
	std::cout<<"DONE!"<<"\n";
}

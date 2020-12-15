#pragma once
#include "Student.h"

class Institute {
private:
	int _studentCounter;
	Student* _studentArr;
public:
		Institute() = default;

		void ReadStudentList(std::string path);
		void ShowStudentInfo();
		void ExamStudents();
		void MakeOrder(std::string path);
		~Institute();
};
#pragma once
#include <iostream>
#include <string>
class Student {
private:
	std::string _fio		= "no";
	std::string _birthDate  = "no";
	std::string _adress		= "no";
	bool        _status		   = 0;
	bool        _stipendion    = 0;
	short int   _mark          = 0;

	const std::string* _fioc = &_fio;
	const std::string* _birthDatec = &_birthDate;
	const std::string* _adressc = &_adress;
public:
	Student() = default;

	void SetStatusStudent(bool status);
	void SetStipendionStudent(bool stipendion);
	void SetMark(short int mark);
	void GetStudent(std::ifstream& in);

	const std::string* GetFio();
	const std::string* GetBirthDate();
	const std::string* GetAdress();
	bool		GetStatus();
	bool		GetStipendion();
	short int	GetMark();
	
	~Student() = default;
};
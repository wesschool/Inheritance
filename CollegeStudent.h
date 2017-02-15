#pragma once
#include "Student.h"
class CollegeStudent : public Student
{
public:
	CollegeStudent();
	CollegeStudent(std::string first, std::string last);
	~CollegeStudent();

	int getPhoneNumber();
	void setPhoneNumber(int number);

	std::string getEmail();

protected:
	Result isUserValid() override;

private:
	//school's email ending
	std::string emailDomain = "@rit.edu";
	int phoneNumber = 0;
};

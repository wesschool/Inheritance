#pragma once
#include "Student.h"
class CollegeStudent : public Student
{
public:
	CollegeStudent();
	CollegeStudent(std::string first, std::string last);
	~CollegeStudent();

	std::string getEmail();

private:
	//school's email ending
	std::string emailDomain = "@rit.edu";
};


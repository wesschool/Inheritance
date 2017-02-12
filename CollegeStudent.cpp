#include "CollegeStudent.h"



CollegeStudent::CollegeStudent()
{
}

CollegeStudent::CollegeStudent(std::string first, std::string last)
{
	//can put checks here to detect for invalid names and throw an exception if error is found
	setFirstName(first);
	setLastName(last);
}

CollegeStudent::~CollegeStudent()
{
}


std::string CollegeStudent::getEmail()
{
	std::string email;

	email += getLastName();
	email.push_back(getFirstName()[0]);
	email.push_back(getFirstName()[1]);
	email += emailDomain;
	
	return email;
}

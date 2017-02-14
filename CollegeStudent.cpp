#include "CollegeStudent.h"

CollegeStudent::CollegeStudent()
{
}

CollegeStudent::CollegeStudent(std::string first, std::string last)
	:Student(first, last)
{
}

CollegeStudent::~CollegeStudent()
{
}


std::string CollegeStudent::getEmail()
{
	std::string email;
	std::string first2CharsOfFirstName = getFirstName().substr(0, 2);

	return getLastName() + first2CharsOfFirstName + emailDomain;
}

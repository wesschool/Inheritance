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

int CollegeStudent::getPhoneNumber()
{
	return phoneNumber;
}

void CollegeStudent::setPhoneNumber(int number)
{
	phoneNumber = number;
}

std::string CollegeStudent::getEmail()
{
	std::string email;
	std::string first2CharsOfFirstName = getFirstName().substr(0, 2);

	return getLastName() + first2CharsOfFirstName + emailDomain;
}

Result CollegeStudent::isUserValid()
{
	//call students isUserValid() first
	Result validationResult = Student::isUserValid();

	//check to see if it passed validation checks
	if (!validationResult.success)
	{
		return validationResult;
	}

	//do our additional validation check
	if (getPhoneNumber() == 0)
	{
		validationResult.success = false;
		validationResult.message = "No Phone Number Found";
	}

	return validationResult;
}

#include "Student.h"
#include <iostream>

Student::Student()
{
}

Student::Student(std::string first, std::string last)
{
	//can put checks here to detect for invalid names and throw an exception if error is found
	setFirstName(first);
	setLastName(last);
}

Student::~Student()
{
}

std::string Student::getFirstName()
{
	return firstName;
}

std::string Student::getLastName()
{
	return lastName;
}

int Student::getYearOfGraduation()
{
	return currentYear + grade;
}

Grade Student::getGrade()
{
	return grade;
}

std::string Student::getEmail()
{		
	std::string first5CharsOfLastName = getFirstName().substr(0, 5);
	
	//if last name isn't 5 characters we want to grab more characters from first name
	int additionalCharacters = 5 - first5CharsOfLastName.size();

	std::string firstCharOfFirstName = getLastName().substr(0, 1 + additionalCharacters);

	return first5CharsOfLastName + firstCharOfFirstName + emailDomain;
}

void Student::setFirstName(std::string first)
{
	firstName = first;
}

void Student::setLastName(std::string last)
{
	lastName = last;
}

void Student::setGrade(Grade g)
{
	grade = g;
}

Result Student::sendEmail(std::string text)
{

	Result emailStatus;
	emailStatus = isUserValid();
	if (!emailStatus.success)
	{
		return emailStatus;
	}

	std::cout << "--------------------------------\n";
	std::cout << "Send To - " << getEmail() << "\n";
	std::cout << "Name - " << getFirstName() << " " << getLastName() << "\n";
	std::cout << "YOG - " << getYearOfGraduation() << "\n\n";
	std::cout << text << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";

	return emailStatus;

}

Result Student::isUserValid()
{
	Result result;
	if (getFirstName().empty())
	{
		result.success = false;
		result.message = "No First Name";
	}
	if (getLastName().empty())
	{
		result.success = false;
		result.message = "No Last Name";
	}
	if (getGrade() == Undefined)
	{
		result.success = false;
		result.message = "Invalid Grade";
	}
	if (getYearOfGraduation() == 0)
	{
		result.success = false;
		result.message = "Invalid Year Of Graduation";
	}
	//...

	return result;
}

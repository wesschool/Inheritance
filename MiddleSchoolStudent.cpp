#include "MiddleSchoolStudent.h"
#include <iostream>


MiddleSchoolStudent::MiddleSchoolStudent()
{
}

MiddleSchoolStudent::MiddleSchoolStudent(std::string first, std::string last)
{
	//can put checks here to detect for invalid names and throw an exception if error is found
	setFirstName(first);
	setLastName(last);
}

MiddleSchoolStudent::~MiddleSchoolStudent()
{
}


void MiddleSchoolStudent::setTwitterURL(std::string url)
{
	twitterURL = url;
}

void MiddleSchoolStudent::setFacebookURL(std::string url)
{
	facebookURL = url;
}

std::string MiddleSchoolStudent::getTwitterURL()
{
	return twitterURL;
}

std::string MiddleSchoolStudent::getFacebookURL()
{
	return facebookURL;
}

Result MiddleSchoolStudent::sendEmail(std::string text)
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
	std::cout << text << "\n\n";
	std::cout << "Social Media Information:\n\tTwitter - " << getTwitterURL() << "\n\t";
	std::cout << "Facebook - " << getFacebookURL() << "\n";
	std::cout << "--------------------------------\n";

	emailStatus.message = "Email Has Been Sent";

	return emailStatus;
}
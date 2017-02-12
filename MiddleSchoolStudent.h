#pragma once
#include "Student.h"
class MiddleSchoolStudent : public Student
{
public:
	MiddleSchoolStudent();
	MiddleSchoolStudent(std::string first, std::string last);
	~MiddleSchoolStudent();

	
	void setTwitterURL(std::string url);
	void setFacebookURL(std::string url);

	std::string getTwitterURL();
	std::string getFacebookURL();

	Result sendEmail(std::string text);

private:
	std::string twitterURL;
	std::string facebookURL;
};


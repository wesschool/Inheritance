#include "CollegeStudent.h"
#include "MiddleSchoolStudent.h"
#include <iostream>

int main()
{
	CollegeStudent cStudent("jeff", "adams");
	cStudent.setGrade(Sophomore);
	cStudent.sendEmail("Remember to get all your late work in!");

	std::cout << "\n\n";

	MiddleSchoolStudent mStudent("jeffrey", "harper");
	mStudent.setGrade(Freshman);
	mStudent.setTwitterURL("twitter.com/asf832fa");
	mStudent.setFacebookURL("facebook.com/098asfh213");
	mStudent.sendEmail("Your library books are late!");

	std::cout << "\n";
}
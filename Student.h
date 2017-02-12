#pragma once
#include <string>

#define currentYear 2017

//to be added to current year to find yog
enum Grade {
	Undefined = 0, Senior = 1, Junior = 2, Sophomore = 3, Freshman = 4,
};

struct Result {
	bool success = true;
	std::string message;

	friend std::ostream& operator<<(std::ostream& os, const Result& result)
	{
		if (!result.success)
		{
			os << "Error: " << result.message << "\n";
		}
		return os;
	}
};

class Student
{
public:
	Student();
	Student(std::string first, std::string last);
	~Student();

	std::string getFirstName();
	std::string getLastName();
	int getYearOfGraduation();
	Grade getGrade();
	virtual std::string getEmail();
	
	void setFirstName(std::string first);
	void setLastName(std::string last);
	void setGrade(Grade g);

	//sends email and returns the result of the email
	virtual Result sendEmail(std::string text);

protected:
	//checks to make sure student valid and returns the result of the check
	Result isUserValid();

private:
	std::string emailDomain = "@example.com";
	std::string firstName;
	std::string lastName;
	Grade grade = Undefined;
};
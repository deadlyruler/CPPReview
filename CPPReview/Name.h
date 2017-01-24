#ifndef NAME_H
#define NAME_H

#include <string>

class Name {
private:
	std::string firstName, lastName;
public:
	Name() {
		lastName = firstName = "Undefined";
	}

	Name(std::string firstNameNew, std::string lastNameNew)
	{
		firstName = firstNameNew;
		lastName = lastNameNew;
	}
};
#endif
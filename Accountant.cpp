#include "Accountant.h"
#include <iostream>

void Accountant::setPriority(int priority)
{
	this->priority = priority;
}

int Accountant::getPriority() const
{
	return priority;
}

void Accountant::saySomething()
{
	std::cout << "I am an accountant!" << std::endl;
}

Accountant::Accountant()
{

}

Accountant::Accountant(int salary, std::string orgName, int age, std::string name, int priority) :
	Worker(salary, orgName, age, name),
	priority(priority)
{
	std::cout << "Created an accountant!" << std::endl;
}

Accountant::~Accountant()
{
	std::cout << "Killed an accountant!" << std::endl;
}
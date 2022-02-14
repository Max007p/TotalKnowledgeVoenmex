#include "Worker.h"
#include <iostream>

void Worker::setSalary(int salary)
{
	this->salary = salary;
}

void Worker::setOrganisationName(std::string organisationName)
{
	this->organisationName = organisationName;
}

std::string Worker::getOrganisationName() const
{
	return this->organisationName;
}

int Worker::getSalary() const
{
	return this->salary;
}

void Worker::saySomething()
{
	std::cout << "I am a worker!" << std::endl;
}

Worker::Worker()
{

}

Worker::Worker(int salary, std::string orgName, int age, std::string name):
	salary(salary),
	organisationName(orgName),
	Human(age, name)
{
	std::cout << "Created a worker!" << std::endl;
}

Worker::~Worker()
{
	std::cout << "Killed a worker!" << std::endl;
}
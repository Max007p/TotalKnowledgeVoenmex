#include "Human.h"

class Worker : public Human
{
public:
	void setSalary(int);
	void setOrganisationName(std::string);
	std::string getOrganisationName() const;
	int getSalary() const;
	void saySomething() override;

	virtual ~Worker();
private:
	std::string organisationName;
	int salary;
protected:
	Worker();
	Worker(int, std::string, int, std::string);
};


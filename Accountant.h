#include "Worker.h"

class Accountant : public Worker
{
public:
	void setPriority(int);
	int getPriority() const;
	void saySomething() override;

	Accountant();
	Accountant(int, std::string, int, std::string, int);
	~Accountant();
private:
	int priority;
};


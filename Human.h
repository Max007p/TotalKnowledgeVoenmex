#include <string>

class Human
{
public:
	void setAge(int);
	void setName(std::string);
	int getAge() const;
	std::string getName() const;
	virtual void saySomething() = 0;
	virtual ~Human();
private:
	int age;
	std::string name;
protected:
	Human();
	Human(int, std::string);
};
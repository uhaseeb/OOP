#include<iostream>
using namespace std;

class AbstractEmployee{						//abstract class
	virtual void AskforPromotion()=0;		// abstract function or virtual function
};
class Employee:AbstractEmployee{
	private:
		string Name;
		string Company;
		int Age;
		
	public:
	Employee(string name,string company, int age)
	{
		Name=name;
		Company=company;
		Age=age;
	}
	void print()
	{
		cout<<Name<<" "<<Company<<" "<<Age<<endl;
	}	
	void AskforPromotion()								// abstract function declaration
	{
		if(Age>=25)
		{
			cout<<Name<<" Congrats! You are Promoted"<<endl;
		}
		else
		{
			cout<<Name<<" Sorry Your Promotion is not Possible Yet"<<endl;
		}
	}
};

int main()
{
	Employee e1 = Employee("Haseeb", "ABS",22);
	Employee e2 = Employee("John", "CodeSecret",26);
	
	e1.AskforPromotion();
	e2.AskforPromotion();
	
}

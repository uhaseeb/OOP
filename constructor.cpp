#include<iostream>
using namespace std;

class Employee{
	public:
		string Name;
		string Company;
		int Age;

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
	};
	
	int main()
	{
		Employee e1 = Employee("Haseeb","CodeNet", 22);
		e1.print();
	}
	 	

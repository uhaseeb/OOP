#include<iostream>
using namespace std;

class Employee{
	public:
		string Name;
		string Company;
		int Age;
		
	void myself()
	{
		cout<<Name<<Age<<Company<<endl;
	}
		
	};
	
	int main()
	{
		Employee e1;
		e1.Name = "Haseeb";
		e1.Company="ABC";
		e1.Age= 12;
		e1.myself();
		
	}
	 	

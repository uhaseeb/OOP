#include<iostream>
using namespace std;

class Person
{
	public:
	Person()
	{
		cout<<"I am a Person"<<endl;
	}
};
class Faculty : public Person
{
	public:
		Faculty():Person()
		{
			cout<<"I am faculty"<<endl;
		}
};
class Student : public Person
{
	public:
		Student():Person()
		{
			cout<<"I am student"<<endl;
		}
};
class TA : public Faculty, public Student 
{
	public:
		TA():Faculty(),Student()
		{
			cout<<"I am a TA"<<endl;
		}
};
	int main()
	{
		TA t;
		
	}

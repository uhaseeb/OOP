#include<iostream>
using namespace std;

class Employee{
	private:
		string Company;
		int Age;
	protected:
		string Name;                    	/// with the use of protected access modifier we can access directly the protected variable in inherited class 
	public:
	Employee(string name, string company, int age)
		{
		Name=name;
		Company=company;
		Age=age;
		}
		
		void setName(string name)
	{
		Name=name;
	}
	string getName()
	{
		return Name;
	}
	
		void setCompany(string company)
	{
		Company=company;
	}
	string getCompany()
	{
		return Company;
	}
	
		void setAge(int age)
	{
		Age=age;
	}
	int getAge()
	{
		return Age;
	}
	
	void print()
	{
		cout<<Name<<" "<<Company<<" "<<Age<<endl;
	}
	};
	
	class Developer: public Employee{
		protected:
		string Programming_language;
		int Experience;
	public:
	Developer(string name,string company,int age, string programming_language,int experience): Employee(name,company,age)    //constructors in inheritence
	{
		Programming_language = programming_language;
		Experience = experience;		
	}
	
	void print(){
	
		cout<<"My name is:"<< Name<<"company is:"<<getCompany()<<"I am expert in:"<<Programming_language<<"and has experience of"<<Experience<<endl;
	}
	};
	class Backend: public Developer{
		private:
			string Platform;
		public:
			Backend(string name, string company, int age, string programming_language, int experience, string platform): Developer(name,company,age,programming_language,experience)
			{
				Platform = platform;
			}
			
			void getinfo()
			{
				cout<<"About MySelf"<<endl;
					cout<<"My name is:"<< Name<<endl;
					cout<<"My company is:"<<getCompany()<<endl;
					cout<<"I am expert in:"<<Programming_language<<endl;
					cout<<"Experience of:"<<Experience<<endl;
					cout<<"I am working on:"<<Platform<<endl;
			}
	};
	int main()
	{
		Developer d1 = Developer("Mark","Microsoft",35,".NET",5); 
		d1.print();
	Backend b1 = Backend("Mark","Google",36,"React",7,"Visual Studio Code");
	b1.getinfo();
	}

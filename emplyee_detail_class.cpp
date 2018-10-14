#include<iostream>
using namespace std;
class employee
{
	private:
		int id;
		char name[20];
		float salary;
		void get_emp()
		{
			cout<<"enter your employee id, name and salary -->\n";
			cin>>id>>name>>salary;
		}
		
	public:
		void put_emp()
		{
			get_emp();
			cout<<"employee id : "<<id;
			cout<<"\nemployee name : "<<name;
			cout<<"\nemployee salary :"<<salary;
		}
};

int main()
{
	employee e;
	e.put_emp();
}

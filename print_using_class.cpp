#include<iostream>
using namespace std;
class A
{
	public:
		string name;
		void print_str()
		{
			cout<<"the string given to print is : "<<name;
		}
};
int main()
{
	A obj1;
	obj1.name= "hello C++";
	obj1.print_str();
}

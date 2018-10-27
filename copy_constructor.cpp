#include<iostream>
using namespace std;
class Example
{
	int a,b;
	public:
		Example()
		{
			a = 50;
			b = 100;
			cout<<"\n i am default";
		}
		Example(int x , int y)
		{
			a = x;
			b = y;
			cout<<"\ni am parameterized";
		}
		void display()
		{
			cout<<"\nvalues : "<<a<<"\t"<<b;
		}
};
int main()
{
	Example o(10,20);
	Example obj;
	o.display();
	obj.display();
	return 0;
}

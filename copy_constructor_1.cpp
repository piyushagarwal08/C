#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
		example(int x, int y)
		{
			a = x;
			b = y;
			cout<<"i am constructor";
		}
		void display()
		{
			cout<<a<<b;
		}
};

int main()
{
	example object(10,20);
	example ob;
	example object1 = object;
	object.display();
	object1.display();	
}

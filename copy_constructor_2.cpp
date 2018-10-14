#include<iostream>
using namespace std;
class number
{
	int x,y;
	public:
		number(number & n)
		{
			x = n.x;
			cout<<"\ni am copy constructor"<<x<<y;
		}
		number(int i)
		{   //y= 8*i;
			x = i;
			cout<<"i am parameterized constructor"<<x+y;
		}
		void show()
		{
			
			cout<<"\ni am function show"<<x<<y;
		}
};
main()
{
	number n1(20);
	n1.show();
	number n2(n1);
	n2.show();
	number n3=n1;
	n3.show();
}

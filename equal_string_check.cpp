#include<iostream>
using namespace std;
class sample
{
	string a;
	public:
		void get_value()
		{
			cout<<"enter any strings : ";
			cin>>a;
		}
		
		sample operator==(sample o)
		{	sample t;
			if(a == o.a)
			{
				cout<<"both are equal";
			}
			else
			{
				cout<<"both are not equal";
			}
			return(t);
			
		}
		

};

int main()
{
	sample o1,o2,r;
	o1.get_value();
	o2.get_value();
	
	r = o1 == o2;

	return 0;
}

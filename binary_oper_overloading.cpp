#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		void get_value()
		{
			cout<<"enter the value of real(a) part and imaginary(b) part of complex number : ";
			cin>>a>>b;
		}
		
		 sample operator+(sample o)
		{
			sample t;
			t.a = a + o.a;
			t.b = b + o.b;
			return(t);	
		}
		
		sample operator-(sample o)
		{
			sample t;
			t.a = a - o.a;
			t.b = b - o.b;
			return(t);
		}
		
		void display()
		{
			cout<<a<<"+"<<b<<"i"<<"\n";
		}
};

int main()
{
	sample o1,o2,r,r1;
	o1.get_value();
	o2.get_value();
	
	r = o1 + o2;
	r1 = o1 - o2;
	
	cout<<"input values : \n";
	o1.display();
	o2.display();
	
	cout<<"addition of given complex numbers : ";
	r.display();
	r1.display();	
	return 0;
}

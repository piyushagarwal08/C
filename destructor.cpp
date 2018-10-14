#include<iostream>
using namespace std;
class sample
{
	int x;
	public:
		sample(int n)
		{
			x = n;
			cout<<endl<<"constructor called for obj"<<x;
		}
		~sample()
		{
			cout<<endl<<"destructor called for object"<<x;
		}
};
main()
{
	sample s1(1);
	sample s2(2);
	sample s3(3);
	sample s4(4);
}

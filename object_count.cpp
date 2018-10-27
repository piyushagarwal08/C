#include<iostream>
using namespace std;
class sample
{
	static int count;
	public:
		sample()
		{
			count++;
			cout<<"\nactive object : "<<count;
		}
		~sample()
		{	
			cout<<"\ndestroyed object number : "<<count;
			count--;		
		}
		void get_count()
		{
			cout<<"\nactive objects : "<<count;
		}
};
int sample :: count;
int main()
{
	cout<<"\nmain block, creating first object";
	sample o1;
	{
		cout<<"\ninside block 1";
		cout<<"\ncreating a second object";
		sample o2;
		cout<<"\ncreating a third object";
		sample o3;
		cout<<"\nleaving block 1";		
	}
	{
		sample o2;
		sample o5;
	}
	cout<<"\nagain inside main block";
	o1.get_count();
	cout<<"\nprogram end's ";
	return 0;	
}

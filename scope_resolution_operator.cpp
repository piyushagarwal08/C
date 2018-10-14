#include<iostream>
using namespace std;
int m = 10;
int main()
{
	int m = 20;
	{
		int k = m ;
		int m = 30;
		cout<<"we are in inner block\n";
		cout<<k<<"\n"<<m ;
		cout<<"\nvalue of m outside block is : "<<::m;	
	}
	return 0;
}

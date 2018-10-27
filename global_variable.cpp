#include<iostream>
using namespace std;
int num = 20;
int main()
{
	int num = 10;
	cout<<"local : "<<num;
	cout<<endl<<"global: "<<::num;
	cout<<endl<<"global + local : "<<::num + num;
	return 0;
}

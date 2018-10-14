#include<iostream>
using namespace std;
inline int max(int x,int y)
{
	return((x>y)?x:y);
}
int main()
{
	cout<<"max(20,10) : "<<max(20,10)<<endl;
	cout<<"max(0,10) : "<<max(0,10)<<endl;
	return 0;
}

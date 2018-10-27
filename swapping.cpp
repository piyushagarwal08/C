#include<iostream>
using namespace std;
void swap(int &x, int&y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int x,y;
	cout<<"enter x and y : ";
	cin>>x>>y;
	swap(x,y);
	cout<<"after swapping : "<<x<<endl<<y;
	return 0;
}

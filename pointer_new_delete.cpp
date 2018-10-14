#include<iostream>
using namespace std;
int main()
{
	int *a;
	int size;
	cout<<"enter the size of integer array : ";
	cin>>size;
	cout<<"\ncreated an array of size : "<<size;
	a = new int[size];
	delete a;
	return 0;
	
}

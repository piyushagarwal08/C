#include<iostream>
using namespace std;
int main()
{
	float num1,num2;
	cout<<"enter any two number : ";
	cin>>num1>>num2;
	
	float sum = num1+num2;
	float average = sum/2;
	cout<<"the sum of the given two numbers is : "<<sum;
	cout<<"\n the average of the given two numbers is : "<<average;
	return 0;
}

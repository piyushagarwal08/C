#include<iostream>
using namespace std;
class s
{
	public:
		int square(int s);
};
inline int s :: square(int s)
{
	int square = s*s;
	cout<<"the square of "<<s<<" is : "<<square;
}
int main()
{ s a;
a.square(13); //enter the number here to get its square value
	
}

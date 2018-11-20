#include<iostream>
#include<fstream>
using namespace std;
class student
{
	public:
		int roll;
		char name[15]; 
		char f_name[20];
		void put();
		void get();
		void switch_case();
};student s;
void student :: put()
{
	fstream file;
	cout<<"enter roll no: ";
	cin>>roll;
	cout<<"enter name: ";
	cin>>name;
	cout<<"enter father name: ";
	cin>>f_name;
	file.open("stu.dat",ios::out|ios::app);
	file.write((char *) this,sizeof(student));
	file.close();
	s.switch_case();
	
}

void student::get()
{
	int temp;
	cout<<"enter roll number: ";
	cin>>temp;
	fstream file;
	file.open("stu.dat",ios::in);
	file.seekg(0, ios::beg);
	while(file.read((char *) this,sizeof(student)));
	{
		if(roll == temp)
		{
			cout<<"roll no"<<roll<<endl;
			cout<<"student name: "<<name<<endl;
			cout<<"father name: "<<f_name;
		}
		
	}
	file.close();
	s.switch_case();
}

void student :: switch_case()
{
	int i;
	cout<<"enter your choice(1.read,2.write,3.exit)";
	cin>>i;
	switch(i)
	{
		case 1:s.put();break;
		case 2:s.get();break;
		case 3:exit(0);
		default:cout<<"wrong choice";
	}
}

int main()
{
	s.switch_case();
	return 0;
}



#include<iostream>
using namespace std;
class book
{
	private:
		int n;
		int total_cost;
		int book_no;
		char book_title[100];
		float price;
		
		void total_price()
		{
			cout<<"\nenter the value of number of copies : ";
			cin>>n;
			total_cost = n*price;
		}
		public:
			void input()
			{
				cout<<"enter the book number , book title and price : ";
				cin>>book_no>>book_title>>price;
				cout<<"\nbook no. is : "<<book_no;
				cout<<"\nbook title is : "<<book_title;
				cout<<"\nprice of book is : "<<price;
			}
			void purchase()
			{
				input();
				total_price();
				cout<<"\ntotal cost is : "<<total_cost;
			}
};
int main()
{
	book b;
	b.purchase();
}

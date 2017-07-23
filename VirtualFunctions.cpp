#include<iostream>
using namespace std;

class Base
{
	public:
		virtual void TellHai()
		{
			cout<<"Hai from Base class"<<endl;
		}
		void TellHello()
		{
			cout<<"Hello from Base class"<<endl;
		}
	
};
class Derived:public Base
{
	public:
		virtual void TellHai()
		{
			cout<<"Hai from Derived class"<<endl;
		}
		void TellHello()
		{
			cout<<"Hello from Derived class"<<endl;
		}
};
int main()
{
	Base *base;
	Derived derived;
	base = &derived;
	base->TellHai();
	base->TellHello();
	return 0;
}



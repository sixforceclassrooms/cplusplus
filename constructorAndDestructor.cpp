#include <iostream>
using namespace std;
class Box
{
public:
	int a;
	int b; 
Box()
{
	cout<<"Constructor Called"<<endl;
}
~Box()
{
	cout<<"Destructor Called"<<endl;
}
};
int main() 
{
	Box b1;
	b1.a = 100;
	b1.b = 200;
	cout<<b1.a<<endl;
	cout<<b1.b<<endl;
	return 0;
}



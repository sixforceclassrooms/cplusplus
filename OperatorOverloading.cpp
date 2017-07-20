#include <iostream>
using namespace std;
class Box
{
	public:
		int a;
		int b;
};
Box operator+(Box b1,Box b2)
{
	Box b3;
	b3.a = b1.a + b2.a;
	b3.b = b1.b + b2.b;
	return b3;
}
int main() 
{
	Box a1,a2;
	a1.a = 10;
	a1.b = 20;
	a2.a = 100;
	a2.b = 60;
	Box a3 = a1 + a2;
	cout<<a3.a<<endl;
	cout<<a3.b<<endl;
	return 0;
}



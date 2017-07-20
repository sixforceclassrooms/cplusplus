#include <iostream>
using namespace std;
class Box
{
	public:
		void add(int a, int b)
		{
			cout<<"First Function "<<(a+b)<<endl;
		}
		void add(int a, int b,int c)
		{
			cout<<"Second Function "<<(a+b+c)<<endl;
		}
};
int main() 
{
	Box b1;
	b1.add(20,39);
	b1.add(50,79,32);
	return 0;
}



#include <iostream>
using namespace std;

class PencilBox
{
	public:
		int noOfPencils;
		int noOfSketches;
};
int main() 
{
	PencilBox pb;
	pb.noOfPencils = 10;
	pb.noOfSketches = 12;
	cout<<"No Of Pencils : "<<pb.noOfPencils<<endl;
	cout<<"No Of Sketches : "<<pb.noOfSketches<<endl;
	return 0;
}



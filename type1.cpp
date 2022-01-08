#include "iostream"

using namespace std;

main()
{

	int x[5]={2,4,6,8,10};

	int* p;

	cout<<x<<endl;
	cout<<&x[0]<<endl;

	int y=20;
	int* p1;

	p1 = &y;

	p = x;

	cout<<p<<endl;
	cout<<x[0]<<endl;

	cout<<*(p+1)<<endl;
	cout<<*(x+1)<<endl;
	cout<<x[1]<<endl;

	cout<<*(p+4)<<endl;


}

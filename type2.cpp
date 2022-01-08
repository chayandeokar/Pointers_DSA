#include "iostream"

using namespace std;

main()
{

	int x[5]={2,4,6,8,10};

	int* p;


	p = &x[0];

//	x[1] = 4444;

	*(p+1) =  5555;


	cout<<*p  + 1 <<endl;
	cout<<*(p+1)<<endl;


}

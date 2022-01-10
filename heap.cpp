#include "iostream"

using namespace std;

int main()
{

	int* p = (int*)malloc(2 * sizeof(int) );


	cout<<p<<endl;
	cout<<p+1<<endl;

	*p = 5;
	*(p+1) = 10;
	*(p+2) = 15;

	cout<<*p<<endl;
	cout<<*(p+1)<<endl;
	cout<<*(p+2)<<endl;


}

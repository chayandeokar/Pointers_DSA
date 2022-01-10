#include "iostream"

using namespace std;

int main()
{

	int* p = (int*)malloc(2 * sizeof(int) ); // c or c++

	int* h = new int[2];  // c++

	// *h = 5;

	h[0] = 5;

	// *(h+1) = 10;

	h[1] = 10;


	cout<<h<<endl;
	cout<<*h<<endl;
	cout<<*(h+1)<<endl;

	cout<<h[1]<<endl;

	delete []h;
	h = NULL;

	cout<<h<<endl;





	cout<<p<<endl;

	*p = 5;

	cout<<*p<<endl;

	// dangling pointer
	free(p);
	p = NULL;
	// memory leakage 

//	cout<<*p<<endl;
	cout<<p<<endl;



}

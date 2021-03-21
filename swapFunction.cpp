#include <iostream>
using namespace std;
int main()
{
	//Change values for testing
	int a = 100;
	int b = 20;
	cout << "Before swap :  a = " << a << ",  b = " << b << endl;
	//Store total value in a
	a = a + b;   
	//Load value of a into b
	b = a - b;
	//Load value of b into a
	a = a - b;   
	cout << "After swap :  a = " << a << ",  b = " << b << endl;
	return 0;
}
#include <iostream>
#include "head.h"
using std::cout;
using std::endl;
int main()
{
	Shape A(1,1);
	A.PrintAll();
cout<<endl;
	Circle B(1,1,2.0);
	B.PrintAll();
cout<<endl;
	Square C(1,1,4,4);
	C.PrintAll();
	return 0;
}
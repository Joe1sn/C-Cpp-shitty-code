#include <iostream>
#include "head.h"
using std::cout;
using std::endl;

int main()
{
	Building hotel(20,600,4000);
	hotel.PrintAll();
cout<<endl;
	House home(20,600,4000,400,1000);
	home.PrintAll();
cout<<endl;
	Office office(20,600,4000,996996,20);
	office.PrintAll();
	return 0;
}
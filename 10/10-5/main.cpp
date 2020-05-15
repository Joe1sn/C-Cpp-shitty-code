#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;
int main()
{
	Mammal root("1010010110010110100");
	root.PrintAll();
cout<<endl;
	Person hunman("0101010101010","hunman");
	hunman.Speak();
cout<<endl;
	Dog dogge("1010010101010","dogge");
	dogge.Speak();
cout<<endl;
	Cat catty("0110010101100101","catty");
	catty.Speak();
	return 0;
}
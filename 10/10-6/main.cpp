#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;

int main()
{
	Teacher A("张三","711190","计算机与软件工程学院","讲师");
	A.PrintAll();
cout<<endl;
	Student B("李四","312233","09060102",345);
	B.PrintAll();
	return 0;
}
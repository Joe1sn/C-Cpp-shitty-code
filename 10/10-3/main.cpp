#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;

int main()
{
	Graduate a1("张三",25,"男",
				"计算机科学","C/C++程序设计","讲师",
				10001,200);
	a1.PrintAll();
	return 0;
}
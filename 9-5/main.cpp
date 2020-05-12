/*----------------
 * coding:utf-8
 * c++ standare: c++11
 * g++ version: 5.5.0 20171010
 * environment: ubuntu16.04(wsl version)
 *----------------
*/

#include <iostream>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>
#include "Student.h"
using namespace std;

	//定义全局数组
vector<student> StuDent;
	//创建临时迭代器
vector<student>::iterator tmp;

//------------**开始定义函数**------------

int main()
{
	welcome();
	while(1)
	{
		menu();
		int choice=InputNum();
		switch(choice)
		{
			case 0:
				cout<<"\033[33mOK,Bye~\033[0m\n";
				exit(0);
			case 1:
				AddStudent(StuDent);	break;
			case 2:
				FindStudent();	break;
			case 3:
				EditStudent();	break;
			case 4:
				InsertStudent(StuDent);	break;
			case 5:
				DeleteStudent();	break;
			case 6:
				HelpMenu();	break;
			case 7:
				cout<<"\033[2J\033[u\n";	break;
			default:
				cout<<"选项非法!!!\n";
		}

	}
	return 0;
}

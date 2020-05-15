#include <iostream>
#include "head.h"
using std::cout;
using std::endl;

//构造基类Building的函数
Building::Building(unsigned int layer, unsigned int room, unsigned int area)
{
	Layer=layer;	Room=room;	Area=area;
}
void Building::PrintAll()
{
	cout<<Layer<<" 层楼\n";
	cout<<Room<<" 个房间\n";
	cout<<Area<<" 平方米面积\n";
}

//构造 house 类函数
House::House(unsigned int layer, unsigned int room, unsigned int area,
		unsigned int bedroom, unsigned int cell)
:Building(layer, room, area)
{
	BedRoom=bedroom;	Cell=cell;
}
void House::PrintHouse()
{
	cout<<BedRoom<<" 间卧室\n";
	cout<<Cell<<" 厅\n";
}
void House::PrintAll()
{
	Building::PrintAll();
	House::PrintHouse();
}

//构造 office 类函数
Office::Office(unsigned int layer, unsigned int room, unsigned int area,
			unsigned long file, unsigned int phone)
:Building(layer, room, area)
{
	File=file;	Phone=phone;
}
void Office::PrintOffice()
{
	cout<<File<<" 个文件\n";
	cout<<Phone<<" 个电话\n";
}
void Office::PrintAll()
{
	Building::PrintAll();
	Office::PrintOffice();
}
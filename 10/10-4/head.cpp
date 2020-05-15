#include <iostream>
#include "head.h"
using std::cout;
using std::endl;
const double PI = 3.14159;

//实现shape类的函数功能
Shape::Shape(int centerx, int centery)
{	CenterX=centerx;	CenterY=centery;	};
void Shape::PrintAll()
{
	cout<<"中心点坐标 ("<<CenterX<<","<<CenterY<<")\n";
}

//实现circle类的函数功能
Circle::Circle(int centerx, int centery, double r)
:Shape(centerx, centery)
{
	R=r;
	S=PI*R*R;
}
void Circle::PrintAll()
{
	Shape::PrintAll();
	cout<<"半径> "<<R<<endl;
	cout<<"面积> "<<S<<endl;
}

//实现square类的函数功能
Square::Square(int centerx, int centery,
		   int egdex, int egdey)
:Shape(centerx, centery)
{	
	EgdeX=egdex;	EgdeY=egdey;	
	S = (EgdeX-CenterX)*(EgdeY-CenterY)*4;
};
void Square::PrintAll()
{
	Shape::PrintAll();
	cout<<"顶点坐标> ("<<EgdeX<<","<<EgdeY<<")\n";
	cout<<"面积> "<<S<<endl;
}

#ifndef _HEAD_H
#define _HEAD_H

//定义一个shape的基类
class Shape
{
protected:
	int CenterX, CenterY;
public:
	Shape(int centerx, int centery);
	void PrintAll();
};

//定义一个circle类
class Circle: protected Shape
{
private:
	double R, S;
public:
	Circle(int centerx, int centery, double r);
	void PrintAll();
};

//定义一个square类
class Square: protected Shape
{
private:
	int EgdeX, EgdeY;
	int S;
public:
	Square(int centerx, int centery,
		   int egdex, int egdey);
	void PrintAll();
};
#endif
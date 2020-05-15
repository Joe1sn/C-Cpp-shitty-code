#ifndef _HEAD_H
#define _HEAD_H

//定义基类：哺乳类
class Mammal
{
protected:
	char GenSerial[50];
public:
	Mammal(char *genserial);
	void PrintAll();
};

//----------------开始派生----------------
//定义 哺乳类派生：人类
class Person: protected Mammal
{
private:
	char Name[20];
public:
	Person(char *genserial, char *name);
	void Speak();
};

//定义 哺乳类派生：狗类
class Dog: protected Mammal
{
private:
	char Name[20];
public:
	Dog(char *genserial, char *name);
	void Speak();
};

//定义 哺乳类派生：人类
class Cat: protected Mammal
{
private:
	char Name[20];
public:
	Cat(char *genserial, char *name);
	void Speak();
};

#endif
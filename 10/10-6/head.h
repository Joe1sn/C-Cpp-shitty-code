#ifndef _GRAGUATE_H
#define _GRAGUATE_H

//定义一个基类
class Person
{
protected:
	char Name[20];
	char ID[10];
public:
	Person(char *name, char *id);
	void PrintAll();
};

//由基类派生一个教师类
class Teacher: protected Person
{
private:
	char Department[20];
	char JobTitile[16];
protected:
	void PrintTeacher();
public:
	Teacher(char *name, char *id, char *department, char *jobtitile);
	void PrintAll();
};

//由基类派生出一个学生类
class Student: protected Person
{
private:
	char ClassNumber[10];
	unsigned short int Score;
protected:
	void PrintStudent();
public:
	Student(char *name, char *id,char *classnumber, unsigned short int score);
	void PrintAll();
};
#endif
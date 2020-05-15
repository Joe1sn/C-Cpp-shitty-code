#ifndef _GRAGUATE_H
#define _GRAGUATE_H

//定义一个基类
class Person
{
protected:
	char Name[20];
	char Sex[4];
	unsigned int Age;
public:
	Person(char *name, unsigned int age, char *sex);
	void PrintAll();
};

//由基类派生一个教师类
class Teacher: protected Person
{
private:
	char Major[20];
	char ClassTought[30];
	char JobTitile[16];
protected:
	void PrintTeacher();
public:
	Teacher(char *name, unsigned int age, char *sex,
			char *major, char *classtought, char *jobtitile);
	void PrintAll();
};

//由基类派生出一个学生类
class Student: protected Person
{
private:
	unsigned int ID;
	unsigned short int Score;
protected:
	void PrintStudent();
public:
	Student(char *name, unsigned int age, char *sex,
			unsigned int id, unsigned short int score);
	void PrintAll();
};

//研究生类继承教师类和学生类
class Graduate: protected Teacher, protected Student
{
protected:
	void PrintGraduate();
public:
	Graduate(char *name, unsigned int age, char *sex,//基类成员
			 char *major, char *classtought, char *jobtitile,//教师类成员
			 unsigned int id, unsigned short int score);//学生类成员
	void PrintAll();
};
#endif
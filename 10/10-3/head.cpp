#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;

//实现基类Person的函数功能
Person::Person(char *name, unsigned int age, char *sex)
{
	strcpy(Name,name);
	Age=age;
	strcpy(Sex,sex);
}
void Person::PrintAll()
{
	cout<<"姓名> "<<Name<<endl;
	cout<<"年龄> "<<Age<<endl;
	cout<<"性别> "<<Sex<<endl;
}

//实现教师类的函数功能
Teacher::Teacher(char *name, unsigned int age, char *sex,
				char *major, char *classtought, char *jobtitile)
:Person(name, age, sex)
{
	strcpy(Major,major);
	strcpy(ClassTought,classtought);
	strcpy(JobTitile,jobtitile);
}
void Teacher::PrintTeacher()
{
	cout<<"专业> "<<Major<<endl;
	cout<<"主讲课程> "<<ClassTought<<endl;
	cout<<"职称> "<<JobTitile<<endl;
}	
void Teacher::PrintAll()
{
	Person::PrintAll();
	Teacher::PrintTeacher();
}

//实现学生类的函数功能
Student::Student(char *name, unsigned int age, char *sex,
			unsigned int id, unsigned short int score)
:Person(name, age, sex)
{	ID=id;	Score=score;	};
void Student::PrintStudent()
{
	cout<<"学号> "<<ID<<endl;
	cout<<"考研成绩> "<<Score<<endl;
}
void Student::PrintAll()
{
	Person::PrintAll();
	Student::PrintStudent();
}

//实现研究生的函数功能
Graduate::Graduate(char *name, unsigned int age, char *sex,//基类成员
			 char *major, char *classtought, char *jobtitile,//教师类成员
			 unsigned int id, unsigned short int score)//学生类成员 
:Teacher(name, age, sex, major, classtought, jobtitile),
 Student(name, age, sex, id, score){};
void Graduate::PrintAll()
{
	Teacher::PrintAll();
	Student::PrintStudent();
}
#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;

//实现基类Person的函数功能
Person::Person(char *name,char *id)
{
	strcpy(Name,name);
	strcpy(ID,id);
}
void Person::PrintAll()
{
	cout<<"姓名> "<<Name<<endl;
	cout<<"编号> "<<ID<<endl;
}

//实现教师类的函数功能
Teacher::Teacher(char *name, char *id,
				 char *department, char *jobtitile)
:Person(name, id)
{
	strcpy(Department,department);
	strcpy(JobTitile,jobtitile);
}
void Teacher::PrintTeacher()
{
	cout<<"单位> "<<Department<<endl;
	cout<<"职称> "<<JobTitile<<endl;
}	
void Teacher::PrintAll()
{
	Person::PrintAll();
	Teacher::PrintTeacher();
}

//实现学生类的函数功能
Student::Student(char *name, char *id,
				char *classnumber, unsigned short int score)
:Person(name, id)
{	
	strcpy(ClassNumber,classnumber);
	Score=score;	
};
void Student::PrintStudent()
{
	cout<<"学号> "<<ID<<endl;
	cout<<"班号> "<<ClassNumber<<endl;
	cout<<"成绩> "<<Score<<endl;
}
void Student::PrintAll()
{
	Person::PrintAll();
	Student::PrintStudent();
}
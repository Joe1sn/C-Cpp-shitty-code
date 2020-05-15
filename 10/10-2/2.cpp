#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char Name[20];
	char Sex[4];
	unsigned int Age;
public:
	Person(char *name, unsigned int age, char *sex);
	void PrintAll();
};
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


class Teacher: private Person
{
private:
	char Major[30];
	char ClassTought[30];
	char JobTitile[16];
public:
	Teacher(char *name, unsigned int age, char *sex,
			char *major, char *classtought, char *jobtitile);
	void PrintAll();
};
Teacher::Teacher(char *name, unsigned int age, char *sex,
				char *major, char *classtought, char *jobtitile)
:Person(name, age, sex)
{
	strcpy(Major,major);
	strcpy(ClassTought,classtought);
	strcpy(JobTitile,jobtitile);
}
void Teacher::PrintAll()
{
	Person::PrintAll();
	cout<<"专业> "<<Major<<endl;
	cout<<"主讲课程> "<<ClassTought<<endl;
	cout<<"职称> "<<JobTitile<<endl;
}	


int main()
{
	Person a1("joe1sn",27,"男");
	a1.PrintAll();
cout<<endl;
	Teacher a2("joe2sn",45,"女","计算机与软件工程","C/C++程序设计基础","讲师");
	a2.PrintAll();
	return 0;
}
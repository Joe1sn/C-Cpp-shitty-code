/*----------------
 * coding:utf-8
 * c++ standare: c++11
 * g++ version: 5.5.0 20171010
 * environment: ubuntu16.04(wsl version)
 * code: Joe1sn
 *----------------
*/
#include <iostream>
#include <string.h>
#include <list>
#include <cstdlib>
#include <unistd.h>
#include "Student.h"
using namespace std;

vector<student> StudentList;
	//创建临时迭代器
vector<student>::iterator StudentListTemp;

student::student(int id, char name[12], char sexual[4], 
				unsigned short int height, 
				unsigned short int score)
{
	ID = id;	strcpy(Name,name);
	strcpy(Sexual,sexual);	Height=height;
	Score = score;
};

//student::~student()
//{	cout<<"完成!\n";	};

void student::ChangeStudent(
		char name[12], char sexual[4], 
		unsigned short int height, 
		unsigned short int score)
{
	strcpy(Name,name);	strcpy(Sexual,sexual);
	Height=height;
	Score = score;
}

void student::PrintAll()
{
	cout<<"┌──────────────\n";
	cout<<"├─ID> "<<OutputId()<<endl;
	cout<<"├─姓名> "<<OutputName()<<endl;
	cout<<"├─性别> "<<OutputSexual()<<endl;
	cout<<"├─身高> "<<OutputHeight()<<endl;
	cout<<"└─入学成绩> "<<OutputScore()<<endl;

};

int student::OutputId()
{	return	ID; };
char* student::OutputName()
{	return Name;	};
char* student::OutputSexual()
{	return Sexual;	};
unsigned short int student::OutputHeight()
{	return Height;	};
unsigned short int student::OutputScore()
{	return Score;	};
//------------**类函数定义完毕**------------
//-----------------------------------------

//实现基本的数字输入
int InputNum()
{
	char buf[8];
	read(0,&buf,8);
	if ((strcmp(buf,"clear")) == 0)
		cout<<"\033[2J\033[u";
	else
		return atoi(buf);
};


//1-实现添加功能
void AddStudent(vector<student> &STUDENT)
{	
	int id; char name[12], sexual[4];
	unsigned short int height,score;
	cout<<"\033[2J\033[u";
	cout<<"┌──────────────\n";
	cout<<"│  开始录入学生\n";
	cout<<"├──────────────\a\n";
	cout<<"├─ID> ";	cout.flush();	id=InputNum();
	cout<<"├─姓名> ";	cout.flush();	cin>>name;
	cout<<"├─性别> ";	cout.flush();	cin>>sexual;
	cout<<"├─身高> ";	cout.flush();	height=InputNum();
	cout<<"├─成绩> ";	cout.flush();	score=InputNum();
	student StuTmp(id,name,sexual,height,score);
	STUDENT.push_back(StuTmp);
	cout<<"└─完成!\n";
};

//5-实现删除功能
void DeleteStudent()
{	
	int id;
	bool flag=0;
	cout<<"\033[2J\033[u";
	cout<<"┌──────────────────\n";
	cout<<"│ 开始对学生进行删除\n";
	cout<<"├──────────────────\a\n";
	cout<<"├─ID: ";	cout.flush();	id=InputNum();
	for (StudentListTemp=StudentList.begin(); StudentListTemp != StudentList.end(); StudentListTemp++)
	{
		if ((*StudentListTemp).OutputId()==id)
		{
			flag=1;
			break;
		}
	};
	if (flag)
	{
		StudentList.erase(StudentListTemp);
		cout<<"该学生已被删除!\n";
	}
	else
		cout<<"没有该学生!!!\n";
};

//2-实现查询功能
void FindStudent()
{
	int id;
	bool flag=0;
	cout<<"┌──────────────────\n";
	cout<<"│ 开始对学生进行查询\n";
	cout<<"├──────────────────\a\n";
	cout<<"├─ID: ";	cout.flush();	id=InputNum();
	for (StudentListTemp=StudentList.begin(); StudentListTemp != StudentList.end(); StudentListTemp++)
	{
		if ((*StudentListTemp).OutputId()==id)
		{
			(*StudentListTemp).PrintAll();
			flag=1;
			break;
		}
	}
	if (flag)
		cout<<"查询完毕!\n";
	else
		cout<<"没有该学生!!!\n";
};


//3-实现编辑功能
void EditStudent()
{
	bool flag;
	int id; char name[12], sexual[4];
	unsigned short int height,score;
	cout<<"\033[2J\033[u";
	cout<<"┌──────────────────\n";
	cout<<"│ 开始对学生进行编辑\n";
	cout<<"├──────────────────\a\n";
	cout<<"├─ID: ";	cout.flush();	id=InputNum();
	for (StudentListTemp=StudentList.begin(); StudentListTemp != StudentList.end(); StudentListTemp++)
	{
		if ((*StudentListTemp).OutputId()==id)
		{
			flag = 1;
			break;
		}
	}
	if (flag)
	{
		cout<<"├─────────────────────────\n";
		cout<<"│ 该学生已被选定!，开始编辑\n";
		cout<<"├─────────────────────────\a\n";
		cout<<"├─姓名> ";	cout.flush();	cin>>name;
		cout<<"├─性别> ";	cout.flush();	cin>>sexual;
		cout<<"├─身高> ";	cout.flush();	height=InputNum();
		cout<<"├─成绩> ";	cout.flush();	score=InputNum();
		(*StudentListTemp).ChangeStudent(name,sexual,height,score);
		cout<<"└─完成!\n";
	}
	else
		cout<<"没有该学生!!!\n";
};

//4-实现插入功能
void InsertStudent(vector<student> &STUDENT)
{
	int LastId;
	int count=0;
	bool flag=0;
	cout<<"\033[2J\033[u";
	cout<<"┌──────────────\n";
	cout<<"│  开始添加学生\n";
	cout<<"├──────────────\a\n";
	cout<<"├─前一个ID> ";	cout.flush();	LastId=InputNum();
	
	for (StudentListTemp=StudentList.begin(); StudentListTemp != StudentList.end(); StudentListTemp++)
		{
			if ((*StudentListTemp).OutputId()==LastId)
			{
				flag=1;
				break;
			}
			count++;
		}
		StudentListTemp++;
		if (flag)
		{
			int id; char name[12], sexual[4];
			unsigned short int height,score;
			cout<<"\033[2J\033[u";
			cout<<"┌──────────────\n";
			cout<<"│  开始录入学生\n";
			cout<<"├──────────────\a\n";
			cout<<"├─ID> ";	cout.flush();	id=InputNum();
			cout<<"├─姓名> ";	cout.flush();	cin>>name;
			cout<<"├─性别> ";	cout.flush();	cin>>sexual;
			cout<<"├─身高> ";	cout.flush();	height=InputNum();
			cout<<"├─成绩> ";	cout.flush();	score=InputNum();
			student StuTmp(id,name,sexual,height,score);	
			STUDENT.insert(StudentListTemp,StuTmp);
		}
		else
			cout<<"没有该学生!!!\n";
}

//6-实现帮助菜单
void HelpMenu()
{	cout<<"www.joe1sn.com\n";	};

//实现欢迎界面
void welcome()
{
	cout<<"\033[32m __  __      _ _   ____  _\033[0m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[32m|  \\/  | ___| | |_/ ___|| |_ __ _ _ __\033[0m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[32m| |\\/| |/ _ \\ | __\\___ \\| __/ _` | '__|\033[0m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[32m| |  | |  __/ | |_ ___) | || (_| | |\033[0m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[32m|_|  |_|\\___|_|\\__|____/ \\__\\__,_|_|\033[0m\a\n"; cout.flush(); usleep(321000);
	cout<<"\n";
	cout<<"\033[31m┌─────────────────────\033[1m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[31m│ 学生数据管理系统-Lite\033[1m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[31m│ Made by: Joe1sn\033[1m\a\n"; cout.flush(); usleep(321000);
	cout<<"\033[31m└──────────────────────\033[1m\a\n"; cout.flush(); usleep(321000);
}
void menu()
{
	cout<<"\033[31m┌───────────────────────────────────────────\033[1m\a\n";
	cout<<"\033[31m│ 数据录入-1         数据查询—2     数据修改—3 \033[1m\a\n";         
	cout<<"\033[31m│ 数据插入—4         数据删除-5     退出操作—0 \033[1m\a\n";
	cout<<"\033[31m│ 帮助菜单—6         清屏-7        \033[1m\n";
	cout<<"\033[31m├───────────────────────────────────────────\033[1m\a\n"; cout.flush();
	cout<<"└─选择> ";	cout.flush();
}

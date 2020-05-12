/*----------------
 * coding:utf-8
 * c++ standare: c++11
 * g++ version: 5.5.0 20171010
 * environment: ubuntu16.04(wsl version)
 * code: Joe1sn
 *----------------
*/
#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string.h>
#include <vector>
#include <cstdlib>
#include <unistd.h>
using namespace std;

//构建一个学生类
class student
{
	//私有数值
private:
//public:
	int ID;
	char Name[12];
	char Sexual[4];
	unsigned short int Height;
	unsigned short int Score;

	//公有函数
public:
	int OutputId();
	char* OutputName();
	char* OutputSexual();
	unsigned short int OutputHeight();
	unsigned short int OutputScore();
	void PrintAll();
	void ChangeStudent(	char name[12], char sexual[4], 
						unsigned short int height, 
						unsigned short int score);

	student(int id, char name[12], char sexual[4], 
			unsigned short int height, 
			unsigned short int score);
	//~student();
};

int InputNum();
void AddStudent(vector<student> &STUDENT);
void DeleteStudent();
void FindStudent();
void EditStudent();
void InsertStudent(vector<student> &STUDENT);
void HelpMenu();
void welcome();
void menu();
#endif
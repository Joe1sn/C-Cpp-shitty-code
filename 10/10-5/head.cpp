#include <iostream>
#include <cstring>
#include "head.h"
using std::cout;
using std::endl;
//实现哺乳类的函数
Mammal::Mammal(char *genserial)	
{	strcpy(GenSerial,genserial);	};
void Mammal::PrintAll()
{	
	cout<<"基因序列 >\n";
	cout<<GenSerial<<endl;
}

//实现人类的函数
Person::Person(char *genserial, char *name)
:Mammal(genserial)
{	strcpy(Name,name);	}
void Person::Speak()
{	
	Mammal::PrintAll();
	cout<<"你好!\n";
};

//实现狗类的函数
Dog::Dog(char *genserial, char *name)
:Mammal(genserial)
{	strcpy(Name,name);	};
void Dog::Speak()
{	
	Mammal::PrintAll();
	cout<<"汪~\n";	
};

//实现猫类函数
Cat::Cat(char *genserial, char *name)
:Mammal(genserial)
{	strcpy(Name,name);	};
void Cat::Speak()
{	
	Mammal::PrintAll();
	cout<<"喵~~~\n";	
};
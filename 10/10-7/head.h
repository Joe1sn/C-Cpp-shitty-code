#ifndef _HEAD_H
#define _HEAD_H

//建立基类building
class Building
{
private:
	unsigned int Layer;
	unsigned int Room;
	unsigned int Area;
public:
	Building(unsigned int layer, unsigned int room, unsigned int area);
	void PrintAll();
};

//由 building 类派生出 house 类
class House: private Building
{
private:
	unsigned int BedRoom;
	unsigned int Cell;
protected:
	void PrintHouse();
public:
	House(unsigned int layer, unsigned int room, unsigned int area,
		unsigned int BedRoom, unsigned int Cell);
	void PrintAll();
};

//由 building 类派生出 office 类
class Office: private Building
{
private:
	unsigned int File;
	unsigned long Phone;
protected:
	void PrintOffice();
public:
	Office(unsigned int layer, unsigned int room, unsigned int area,
		unsigned long file, unsigned int phone);
	void PrintAll();
};
#endif
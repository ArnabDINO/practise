/*
class name House

question defined functions
1.name
2.address
3.rooms
4.setup
	asks for data entry
5.display
	displays...n"3 bedroom,1 kitchen,2 bathroom"
6.Copyhouse
	takes input of name,and copies all details of another houser
	
adress is also a class

1.house number
2.city
3.zip
4.setup    input
5.display 

*/


#include<iostream>
#include<cstring>
using namespace std;

class address
{
	public:
	
	string h_num;
	string city;
	int zip;
	
	//functions
	
	void setup(address);
	void display(address);
};

void address::setup(address)
{
	
}

void address::display(address)
{
	
}

class house
{
	public:
	
	string name;
	address add;
	
	//functions
	
	void setup(house);
	void display(house);
	void copyhouse(house,house);
	
};

void house::setup(house)
{
	
}

void house::display(house)
{
	
}

void house::copyhouse(house,house)
{
	
}

int main()
{
	cout<<"Initialising creation of 3 houses \n\n\n house\n";
	house h1;
	h1.setup(h1);
	
	return 0;
}

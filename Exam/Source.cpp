#include<iostream>
#include<vector>
#include<string>

using namespace std;

class guest
{
	string name;
	string surname;
	double rating;
public:
	guest()
	{
		name = "NULL";
		surname = "NULL";
		rating = 0;
	}
	guest()
	{
		this->name = name;
		this->surname = surname;
		this->rating = rating;
	}
};

class admin
{
	string password;
public:
	admin() { password = "NULL"; }
};

class system
{
	string categories;
	string test;
	string ask_to_test;
};

int main()
{


	return 0;
}

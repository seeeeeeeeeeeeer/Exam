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
	void print()
	{
		cout << "Name: " << "\n";
		cout << "Surname: "<< "\n";
		cout << "Rating: "<<"\n";
		cin >> rating;
	}
	string get_name() { return name; }
	string get_surname() { return surname; }
	double get_rating() { return rating; }
	void set_name()
	{
		cout << "Enter Name: ";
		cin >> name;	
	}
	void set_surname()
	{
		cout << "Enter Surname: ";
		cin >> surname;
	}
	void set_rating()
	{
		cout << "Enter rating: ";
		cin >> rating;
	}
};

class admin
{
	string guests;
public:
	void guests() { guests = "NULL"; }
	void guests() { this->guests = guests; }
	
};

class system:public guest,public admin
{
	string categories;
	string test;
	string ask_to_test;
	string login;
	string password;
public:
	system()
	{
		categories = "NULL";
		test = "NULL";
		ask_to_test = "NULL";
		login = "NULL";
		password = "NULL";
	}
	system(string name, string surname, double rating,string login, string password, string categories, string test)
	{
		this->categories = categories;
		this->test = test;
		this->ask_to_test = ask_to_test;
		this->login = login;
		this->password = password;
	}
	void print()
	{
		cout << "Enter categories: " << "\n";
		cin >> categories;
		cout << "Choise you test: " << "\n";
		cin >> test;
	}
	string get_categories() { return categories; }
	string get_test() { return test; }
	string get_ask_to_test() { return ask_to_test; }
	string login() { return login; }
	string password(){ return password; }
	void set_categories()
	{
		cout << "Enter Login: ";
		cin >> login;
		cout << "Enter Password: ";
		cin >> password;
		cout << "Choose you categories: ";
		cin >> categories;
		cout << "Choose you test: ";
		cin >> test;
	}

};

class test
{
	string question;
	string answer;
};

int main()
{


	return 0;
}

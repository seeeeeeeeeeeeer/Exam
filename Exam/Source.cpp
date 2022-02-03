#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

class guest
{
private:
	string login;
	string password;
	string name;
	string surname;
	double rating;
	int marks[12]{};
public:
	guest()
	{
		login = "NULL";
		password = "NULL";
		name = "NULL";
		surname = "NULL";
		rating = 0;
	}
	guest(string login,string password,string name,string surname,double rating,int* marks)
	{
		this->login = login;
		this->password = password;
		this->name = name;
		this->surname = surname;
		this->rating = rating;
		this->marks[12];
	}
	guest(string login, string password, string name, string surname, double rating, int* marks)
	{
		for (int i = 0; i < 12; i++)
		{
			this->marks[i] = marks[i];
		}
	}
	guest(string login, string password, string name, string surname, double rating, int* marks)
	{
		for (int i = 0; i < 12; i++)
		{
			cout << "Marks: "<< marks[i];
		}
	}
	void print()
	{
		cout << "Name: " << "\n";
		cout << "Surname: "<< "\n";
		cout << "Rating: "<<"\n";
		cin >> rating;
	}
	string get_login() { return login; }
	string get_password() { return password; }
	string get_name() { return name; }
	string get_surname() { return surname; }
	double get_rating() { return rating; }	
	void set_login()
	{
		cout << "Enter Login: ";
		cin >> login;
		if(login!=)
	}
	void set_password()
	{
		cout << "Enter Password: ";
		cin >> password;
	}
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

class admin:private guest
{

	string login;
	string password;
	string guests;
public:
	admin()
	{
		login = "NULL";
		password = "NULL";
		guests = "NULL";
	}
	admin(string login,string password,string guests)
	{
		this->login = login;
		this->password = password;
		this->guests = guests;
	}
	string get_login() { return login; }
	string get_password() { return password; }
	string get_guests() { return guests; }
	void set_login()
	{
		cout << "Enter login: ";
		cin >> login;
		if (login!= login)
		{
			cout<<""
		}
	}
	void set_password()
	{
		cout << "Enter password: ";
		cin >> password;
	}
};

class system:public guest,public admin
{
	string categories;
	string test;
	string ask_to_test;
public:
	system()
	{
		categories = "NULL";
		test = "NULL";
		ask_to_test = "NULL";		
	}
	system(string name, string surname, double rating, string categories, string test)
	{
		this->categories = categories;
		this->test = test;
		this->ask_to_test = ask_to_test;	
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
	void set_categories()
	{	
		cout << "Choose you categories: ";
		cin >> categories;
		cout << "Choose you test: ";
		cin >> test;
	}
	void save_to_file()
	{

	}
	void write_from_file()
	{

	}
	void entering_system()
	{
	}
};

class test
{
	string question;
	string answer;
public:
	test()
	{
		question = "NULL";
		answer = "NULL";
	}
	test(string question, string answer)
	{
		this->question = question;
		this->answer = answer;
	}
	void print()
	{
		cout << "Question :" << question << "\n";
		cout << "Answer is: " << answer << "\n";
	}
	string get_question() { return question; }
	string get_answer() { return answer; }
	void set_answer()
	{
		cout << "Youre answer? ";
		cin >> answer;
	}
};

int main()
{
	guest g;
	
	g.print();

	return 0;
}

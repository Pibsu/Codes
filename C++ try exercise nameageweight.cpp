#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
	string firstname, lastname;
	int age;
	double weight;
	cout << "Please enter your name, age, weight separated by spaces..." << endl;
	cout << "Name:" << firstname << " " << lastname;
	cout << "\nAge:" << age << endl;
	cout << "Weight:" << weight << endl; 
	cin >> firstname >> lastname >> age >> weight;
	_getch();
	return 0;
}

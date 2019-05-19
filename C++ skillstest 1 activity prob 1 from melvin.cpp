#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << showpoint;
	double ph;
	cout << " Pay rate for an hour : "<< endl;
	cin>>ph;
	cout <<  setprecision(2) <<ph << "$" << "Per Hour"<< endl;
	cout<<" "<< endl;
	double worktime;
	cout<< "Numbers of Hours worked per Week : " <<endl;
	cin>> worktime;
	cout << setprecision(2) << worktime<< "hours a week" <<endl;
	cout<<" "<< endl;
	double MYM=ph*worktime;
	cout<< "Money owned = " << setprecision(2) <<ph*worktime<<"$"<<endl;
	cout<<" "<< endl;
	cout<< "Job Tax = 14%"<< endl;
	cout<< "Job Tax = "<< setprecision(2)<<0.14*MYM<<endl;
	cout<<" "<< endl;
	double q=MYM-0.14*MYM;
	cout<< "Remaining Money = "<< setprecision(2) <<MYM-0.14*MYM<<endl;
	cout<<" "<< endl;
	cout<< "New Clothes and Accessories = 10%"<<endl;
	cout<< "New Clothes and Accessories = "<< setprecision(2)<<MYM*0.10 << endl;
	cout<<" "<< endl;
	double w=q-MYM*0.10;
	cout<< "Money Left after buying clothes and other accessories = "<<setprecision(2)<<q-MYM*0.10 <<endl;
	cout<<" "<< endl;
	cout<<"School Supplies = 1%"<<endl;
	cout<<"School supplies = "<< MYM*0.01<<endl;
	cout<<" "<< endl;
	double e=w-MYM*0.01;
	cout<<"Money Left after buying School Suplies ="<<setprecision(2)<<w-MYM*0.01<< endl;
	cout<<" "<< endl;
	cout<<"Savings Bonds = 25% "<< endl;
	cout<<"Savings Bonds = "<< e*0.25<<endl;
	cout<<" "<< endl;
	double x=e-0.25*e;
	cout<<"Money Left After Buying the Savings Bond "<< e-0.25*e<< endl;
	cout<<" "<< endl;
	
	_getch();
	return 0;
}

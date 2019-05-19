#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double w, h, sqrh, bmi;
	cout << "Enter Weight(kg): " ; cin >> w; 
	cout << "Enter Height(m): " ; cin >> h;
	//BMI Calculation
	sqrh = h * h;
	bmi = w / sqrh;
	cout << setprecision(2) << fixed << showpoint;
	cout << "BMI = " << bmi << endl;
	
	if (bmi < 18.5){
		cout << "You are UNDERWEIGHT.";
	}
	if (bmi >= 18.5){
		if (bmi <= 24.9){
			cout << "You are Normal.";
		}
	}
	if (bmi > 24.9){
		if (bmi <= 29.9){
		cout << "You are OVERWEIGHT.";	
		}
	}
	if (bmi > 29.9){
		cout << "You are OBESE. PLEASE CONSIDER YOUR DIET AND HABITS.";
	}
	return 0;
}

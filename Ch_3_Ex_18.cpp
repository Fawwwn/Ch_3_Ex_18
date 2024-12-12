
/*  This program will ask for the princial, intreset rate,
 and the number of times the intreset is compunded. It will show you amount of intreset you have earned 
 and the total of your investment in your savings.
*/









#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double principal, rate, amount, interest;
	int timesCompounded;

	cout << "Enter the principal (initial deposit): ";
	cin >> principal;

	cout << "Enter the interest rate (as a percentage, ex 4.25): ";
	cin >> rate;

	cout << "Enter the number of times interest is compounded per year: ";
	cin >> timesCompounded;

	rate = rate / 100;

	amount = principal * pow((1 + rate / timesCompounded), timesCompounded);
	interest = amount - principal;

	cout << fixed << setprecision(2);
	cout << "\nInterest Rate:      " << (rate * 100) << "%" << endl;
	cout << "Times Compounded:   " << timesCompounded << endl;
	cout << "Principal:          $" << principal << endl;
	cout << "Interest:           $" << interest << endl;
	cout << "Amount in Savings:  $" << amount << endl;

	return 0;
}
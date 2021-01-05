  
#include<iostream>
#include<iomanip> 
using namespace std;

int main(){	
	double loan,rate,payment;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	int year = 1;
	double newb;
	for (double balance = loan;balance != 0;balance = newb){
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << year; 
		cout << setw(13) << left << balance;
		double interest = balance*rate/100;
		cout << setw(13) << left << interest;
		double sum = balance+interest;
		cout << setw(13) << left << sum;
		if (sum <payment) payment = sum;
		cout << setw(13) << left << payment;
		newb = sum-payment;
		cout << setw(13) << left << newb;
		cout << "\n";
		year++;	
	}
	return 0;
}

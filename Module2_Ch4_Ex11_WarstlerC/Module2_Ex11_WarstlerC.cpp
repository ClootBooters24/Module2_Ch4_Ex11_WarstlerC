#include <iostream>
using namespace std;

int main()
{
	//Declare variables
	double beginningBalance = 0.0;
	double totalDeposit = 0.0;
	double totalWithdrawals = 0.0;
	double endBalance = 0.0;

	//Display and Enter variables
	cout << "Enter the beginning balance: ";
	cin >> beginningBalance;
	cout << "Enter the total deposits: ";
	cin >> totalDeposit;
	cout << "Enter the total withdrawals: ";
	cin >> totalWithdrawals;

	//Calculate endBalance
	endBalance = beginningBalance + totalDeposit - totalWithdrawals;
	 cout << "Your total balance is $" << endBalance << endl;
}
/*
Name: Collins Ng'ang'a Maina
Reg Number: BCS-03-0001/2025
Description: A program to demonstrate OOP concepts in a bank management system
*/
#include <iostream>
using namespace std;

class AccountHolder{
	protected:
		string name;
	
	public: 
	    void setName(string n){
	    	name = n;
		}
	
		string getName(){
			return name;
		}
};
class BankAccount: public AccountHolder{
	private:
		int accountNumber;
		double balance;
//Constructor to initialize name,accountNumber and balance
	public:
		BankAccount(string n, int accountNo, double bal){
			setName(n);
			accountNumber=accountNo;
			balance=bal;
		}
//Get functions to return account number and balance
	public:
		int getAccountNumber(){
			return accountNumber;
		}
		double getBalance(){
			return balance;
		}
};
class SavingsAccount: public BankAccount{
	private:
		double interestRate;
//Constructor to initialize name,accountNumber,balance and interestRate
	public:
		SavingsAccount(string n, int accountNo, double bal, double interestrate):BankAccount(n, accountNo, bal){
		interestRate=interestrate;	
		}
//Get function to return interest rate
	public:	
	double getInterestRate(){
		return interestRate;
	}	
};
//Main function
int main(){
//Creating an object of SavingsAccount
SavingsAccount mySavings("Collins Maina",12345,30000,2.5);
	cout<<"Account holder's name: "<<mySavings.getName()<<endl;
	cout<<"Account Number: "<<mySavings.getAccountNumber()<<endl;
	cout<<"Account Balance: "<<mySavings.getBalance()<<" shillings"<<endl;
	count<<"Interest Rate "<<mySavings.getInterestRate()<<"%"<<endl;
return 0;
}



/*
Name: Collins Ng'ang'a Maina
Reg. Number: BCS-03-0001/2025
Description: A program to demonstrate function overloading in a Bank Loan System
*/
#include<iostream>
using namespace std;
class LoanProcessing{
	public:
		void processLoan( int amount){
			cout<<"Loan Amount "<<amount<<" shillings"<<endl;
		}
		void processLoan(double amount, double interestRate){
			cout<<"Loan amount: "<<amount<<" shillings"<<endl;
			cout<<"Interest rate: "<<interestRate<<" % "<<endl;	
		}
		void processLoan(string customerName, int amount, int duration){
			cout<<"Customer's name:"<<customerName<<"\nLoan amount: "<<amount<<" shillings"<<"\nLoan duration: "<<duration<<"years"<<endl;
		}
};
int main()
{
	LoanProcessing L1;
	L1.processLoan(10000); 
	L1.processLoan(100000,10.5);
	L1.processLoan("Collins",10000,5);
	return 0;
}

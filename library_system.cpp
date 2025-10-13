/*
Name: Collins Ng'ang'a Maina
Registration Number: BCS-03-0001/2025
Description: CAT 2 Question
			A program to demonstrate OOP concepts in a library management system 
*/
#include<iostream>
using namespace std;

//Definition of the base class
class Person{
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
//Definition of the derived class 1
class LibraryMember: public Person{
	private:
		int memberID;
	
	private:
		int booksBorrowed;
	
//Constructor to initialize name, memberID and booksBorrowed
public:
	LibraryMember(string n, int memID, int books){
		setName(n);
		memberID=memID;
		booksBorrowed=books;
	}
//Get functions to return memberID and booksBorrowed
public:
		int getMemberID(){
			return memberID;
		}
		double getBooksBorrowed(){
			return booksBorrowed;
		}
};

//Definition of the derived class 2
class PremiumMember: public LibraryMember{
	private:
		double membershipFee;
//Constructor to initialize name, memberID, booksBorrowed and membershipFee
public:
	PremiumMember(string n, int memID,int books, double memFee):LibraryMember(n, memID, books){
		membershipFee=memFee;
	}
//Get function to return membershipFee
public:
	int getMembershipFee(){
		return membershipFee;
	}
};
//Main function
int main()
{
//Creating an object for PremiumMember
PremiumMember userinfo("Collins Maina",93130,7,3500);

cout<<"Member's name: "<<userinfo.getName()<<endl;
cout<<"Member's ID:"<<userinfo.getMemberID()<<endl;
cout<<"You have borrowed "<<userinfo.getBooksBorrowed()<<" books"<<endl;
cout<<"Your Membership Fee is:"<<userinfo.getMembershipFee()<<" shillings"<<endl;
return 0;
}

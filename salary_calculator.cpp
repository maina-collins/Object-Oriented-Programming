/* 
Name: Collins  Ng'ang'a Maina
Registration number: BCS-03-0001/2025
Description: A program to calculate the gross pay, taxes amd net pay for a user
*/

#include<iostream>
using namespace std;
//Gross pay function prototype
float calcgrosspay(int hours, float rate, float overtime);

//Tax function prototype
float calctax(float gross);

//Net salary function prototype
float calcnetsalary(float gross, float tax);

//Gross pay function call
int main()
{
	float rate,gross,overtime;
	int hours;
	cout<<"Enter the amount of hours worked this week:"<<endl;
	cin>>hours;
	cout<<"Enter the hourly rate:"<<endl;
	cin>>rate;
	
	if (hours<=40){
		overtime=0;
	}
	else if(hours>40){
		overtime=(hours-40)*1.5;
	}
	gross=calcgrosspay(hours,rate,overtime);
	cout<<"Gross pay: Sh. "<<gross<<endl;
//Tax function call
float tax;
tax=calctax(gross);
cout<<"Tax is Sh. "<<tax<<endl;
//Net salary function call
float net;
net=calcnetsalary(gross,tax);
cout<<"Net salary: Sh. "<<net<<endl;
}
//Gross pay function description
float calcgrosspay(int hours,float rate,float overtime){
	float gross;
	gross=(hours*rate)+overtime;
	return gross;
}
//Tax function description
float calctax(float gross){
	float tax;
	if (gross <= 600){
		tax = gross * 0.15;
	} else if (gross > 600){
		tax = (600 * 0.15) + ((gross - 600) * 0.20);
	}
	return tax;	
}

//Net salary function description
float calcnetsalary(float gross, float tax){
	float net;
	net=gross-tax;
	return net;
}

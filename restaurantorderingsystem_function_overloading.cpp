/*
Name: Collins Ng'ang'a Maina
Reg. Number: BCS-03-0001/2025
Description: A program to demonstrate function overloading in a restaraunt ordering system
*/
#include<iostream>
using namespace std;
class RestaurantOrder{
	public:
		void placeOrder(string itemName){
			cout<<"Item selected: "<<itemName<<endl;
		}
		void placeOrder(string itemName, int quantity){
			cout<<"Item selected: "<<itemName<<" Quantity: "<<quantity<<endl;
		}
		void placeOrder(string itemName, int quantity,bool takeout){
			cout<<"You have selected: "<<itemName<<"Quantity: "<<quantity<<"\nTake-out: "<<(takeout ? "yes":"no")<<endl;
		}
};
int main(){
	RestaurantOrder Cus1;
	Cus1.placeOrder("Shawarma");
	Cus1.placeOrder("Shawarma",2);
	Cus1.placeOrder("Shawarma",2,true);
	return 0;
}

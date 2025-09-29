/* 
Name: Collins Ng'ang'a Maina
Reg. Number: BCS-03-0001/2025
Description: A program to show the details of a car using classes, constructors and objects
*/
#include<iostream>
using namespace std;

class Car {  //The class
public:      //Access specifier
    string brand;   //Attribute
    string model;  //Attribute
    float price;  //Attribute
    int mileage; //Attribute
    Car (string x,string y,float z,int a){  //Constructor with parameters
    brand= x;
    model= y;
    price= z;
    mileage= a;
   }
   ~Car(){   //Destructor
        cout<<"Buy while stocks last!"<<endl;
    
   }	
};
int main(){
	//Create the Car objects and call the constructor with different values
	Car carObj1("Toyota","Corolla",20000,5000);
	Car carObj2("Toyota","Probox",15000,8000);
//Print values
    cout<<carObj1.brand<<" "<<carObj1.model<<" "<<carObj1.price<<" "<<carObj1.mileage<<"\n";
    cout<<carObj2.brand<<" "<<carObj2.model<<" "<<carObj2.price<<" "<<carObj2.mileage<<"\n";
    
    return 0;
}

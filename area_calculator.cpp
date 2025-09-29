/*
Name: Collins Ng'ang'a Maina
Reg. Number: BCS-03-0001/2025
Description: program to compute area and surface area of a cylinder using
member variables declared in the class.
*/
#include<iostream>
using namespace std;

class Cylinder{
	
	public:
		
//member variables		
		float r, h;

// member functions		
		float calcS_area(){
			return (2 * 3.14 *r * r) + (2 * 3.14 * r * h);
		}
		
		float calcVol(){
			return 3.14 * r * r * h;
		}
	};

int main(){

//object declaration	
	Cylinder cylinder1;
	float vol, s_area;
	
	cylinder1.r = 14;
	cylinder1.h = 20;
	s_area = cylinder1.calcS_area();
	vol = cylinder1.calcVol();
	
//output	
	cout<<"The surface area is = "<<s_area<<endl;
	cout<<"The volume is = "<<vol<<endl;
	
	return 0;
}

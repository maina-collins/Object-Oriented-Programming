/* 
Name: Collins  Ng'ang'a Maina
Registration number: BCS-03-0001/2025
Description: A program to calculate simple interest and the discount for a customer
*/

#include <iostream>
using namespace std;

// simple_interest and discount function prototype
float simple_interest(float rate, int time, int principal);
int final_price_func(int purchase_amount, float discount);

int main() {
    // Simple Interest function call
    float s_interest, rate, discount;
    int time, principal;

    cout << "Enter the rate, time and principal: " << endl;
    cin >> rate >> time >> principal;

    s_interest = simple_interest(rate, time, principal);
    cout << "The simple interest is: " << s_interest << endl;

    // Discount function call
    int purchase_amount, f_price;
    cout << "Enter the amount of purchase: " << endl;
    cin >> purchase_amount;

    if (purchase_amount < 1000) {
        discount = 0;
    }
    else if (purchase_amount >= 1000 && purchase_amount < 5000) {
        discount = purchase_amount * 0.05;
    }
    else if (purchase_amount >= 5000) {
        discount = purchase_amount * 0.1;
    }

    f_price = final_price_func(purchase_amount, discount);
    cout << "The discount is: " << discount << endl;
    cout << "The final price is: " << f_price << endl;

    return 0;
}

// simple interest function definition
float simple_interest(float rate, int time, int principal) {
    float interest;
    interest = principal * rate / 100 * time;
    return interest;
}

// discount function definition
int final_price_func(int purchase_amount, float discount) {
    int final_price;
    final_price = purchase_amount - discount;
    return final_price;
}

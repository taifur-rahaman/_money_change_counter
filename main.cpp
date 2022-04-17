#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int money_in_cent{0};

    cout << "Enter the amount in cents: ";
    cin >> money_in_cent;

    int dollar{0}, quarters{0}, dimes{0}, nickels{0}, pennies{0};

    while(money_in_cent > 0) {

        if (money_in_cent >= 100) {
            dollar = money_in_cent / 100;
            money_in_cent -= dollar * 100;
        } else if (money_in_cent >= 25) {
            quarters = money_in_cent / 25;
            money_in_cent -= quarters * 25;
        } else if (money_in_cent >= 10) {
            dimes = money_in_cent / 10;
            money_in_cent -= dimes * 10;
        } else if (money_in_cent >= 5) {
            nickels = money_in_cent / 5;
            money_in_cent -= nickels * 5;
        } else {
            pennies = money_in_cent / 1;
            money_in_cent -= pennies * 1;
        }
    }

    cout << "Dollar : " << dollar << endl;
    cout << "Quarters : " << quarters << endl;
    cout << "Dimes : " << dimes << endl;
    cout << "Nickels : " << nickels << endl;
    cout << "Pennies : " << pennies << endl;

    return 0;



}
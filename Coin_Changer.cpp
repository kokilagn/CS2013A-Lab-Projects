#include <iostream>
using namespace std;
int main() {
    int cents;
    cin >> cents;

    int dollars = cents/100;
    cents = cents%100;
    
    int quarters = cents/25;
    cents = cents%25;
    
    int dimes = cents/10;
    cents  = cents%10;
 
    int nickels = cents/5;
    cents = cents%5;
    
    int pennies = cents; //Since Pennies = 1 Cent

    //Result
    cout << "dollars: " << dollars << endl;
    cout << "quarters: " << quarters << endl;
    cout << "dimes: " << dimes << endl;
    cout << "nickels: " << nickels << endl;
    cout << "pennies: " << pennies << endl;

    return 0;
}
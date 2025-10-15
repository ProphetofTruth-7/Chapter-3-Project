// Comment

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double interestRate;
    double initialMoney;
    double interestAccrued;
    int compoundRate;

    cout << "Hi! Please enter your account's Interest Rate(as a decimal) and press enter!" << endl;
    cin >> interestRate;
    cout << "Cool! Now enter how often your Principal is compounded per year!" << endl;
    cin >> compoundRate;
    cout << "Finally, enter your initial Principal!" << endl;
    cin >> initialMoney;
    interestAccrued = initialMoney * (pow((1+(interestRate / compoundRate)), compoundRate));

    cout << interestRate << " & " << compoundRate << " & " << initialMoney << " & " << interestAccrued << endl;

    return 0;
}

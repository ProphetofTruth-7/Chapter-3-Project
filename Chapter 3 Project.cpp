// Comment

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double interestRate;
    double initialMoney;
    double interestAccrued;
    double interestGained;
    int compoundRate;
    

    cout << "Hi! Please enter your account's Interest Rate(as a decimal percentage) and press enter!" << endl;
    cin >> interestRate;
    cout << "Cool! Now enter how often your Principal is compounded per year!" << endl;
    cin >> compoundRate;
    cout << "Finally, enter your initial Principal!" << endl;
    cin >> initialMoney;
    interestAccrued = initialMoney * (pow((1+(interestRate / compoundRate)), compoundRate));
    interestGained = interestAccrued - initialMoney;
    cout << "\n" << endl;

    cout << "Interest Rate:" << setw(15) << interestRate*100 << "%" << endl;
    cout << "Times Coumpounded:" << setw(9) << compoundRate << " time(s) per year" << endl;
    cout << "Principal:" << setw(16) << "$" << initialMoney << endl;
    cout << "Interest:" << setw(17) << "$" << interestGained << endl;
    cout << "Final Principal:" << setw(10) << "$" << interestAccrued << endl;

    return 0;
}

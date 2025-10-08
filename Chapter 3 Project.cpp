// This is the Ingredients Adjuster Subproject

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double SUGAR_CUPS = 1.5 / 48;
    const double BUTTER_CUPS = 0.02083333333;
    const double FLOUR_CUPS = 2.75 / 48;
    int requestedCookies;

    cout << "How many cookies would you like to make? Type a postive integer and press enter!" << endl;
    cin >> requestedCookies;
    cout << "You'll need " << SUGAR_CUPS * requestedCookies << " cups of sugar, " << BUTTER_CUPS * requestedCookies << " cups of butter, and " << FLOUR_CUPS * requestedCookies << " cups of flour to make " << requestedCookies << " cookies" << endl;

    return 0;

}

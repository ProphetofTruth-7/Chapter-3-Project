// Comment

#include <iostream>
#include <random>
using namespace std;

int main()
{

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 1000);
    int answer;
    int random1 = dist(gen);
    int random2 = dist(gen);

    cout << "Hello! Please perform this problem and press enter when you're finished: " << random1 << " + " << random2 << endl;
    cin >> answer;
    cin.get();
    if (answer == (random1 + random2)) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect! The answer is actually " << random1 + random2 << endl;
    }

    return 0;
}

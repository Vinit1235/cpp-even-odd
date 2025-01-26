#include <iostream>
using namespace std;

int iseven(int number) {
    return (number % 2 == 0);
}

int main() {
    int num;
    cout << "Enter a number" << endl;
    cin >> num;

    if (iseven(num)) {
        cout << "The number is Even" << endl;
    } else {
        cout << "The number is Odd" << endl;
    }

    return 0;
}

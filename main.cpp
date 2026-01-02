#include <iostream>
using namespace std;

int main() {
start:    
    long long a = 0;
    long long b = 0;
    int choice;

    cout << "Count like a list(1) or in a single line(2): " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Count from: ";
        cin >> a;
        cout << "To: ";
        cin >> b;

        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
        break;
    
    case 2:
        cout << "Count from: ";
        cin >> a;
        cout << "To: ";
        cin >> b;

        for (int i = a; i <= b; i++) {
            cout << "\r" << i << flush;
        }
        break;
    default:
        cout << "not an option!" << endl;
        goto start;
        break;
    }
}
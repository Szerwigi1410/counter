#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
start:
    //auto x = high_resolution_clock::now();
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
        auto x = high_resolution_clock::now();
        for (int i = a; i <= b; i++) {
            cout << i << endl;
        }
        auto y = high_resolution_clock::now();
        cout << "took " << duration_cast<seconds>(y - x).count() << " seconds" <<  endl;
        break;
    
    case 2:
        cout << "Count from: ";
        cin >> a;
        cout << "To: ";
        cin >> b;
        auto x = high_resolution_clock::now();
        for (int i = a; i <= b; i++) {
            cout << "\r" << i << flush;
        }
        auto y = high_resolution_clock::now();
        cout << "took " << duration_cast<seconds>(y - x).count() << " seconds" <<  endl;
        break;
    default:
        cout << "not an option!" << endl;
        goto start;
        break;
    }
}
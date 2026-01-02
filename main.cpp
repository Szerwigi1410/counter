#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
start:
    std::ios::sync_with_stdio(false); // makes cout faster (according to someone on the internet)
    long long a = 0;
    long long b = 0;
    int choice;

    cout << "Count like a list(1) or in a single line(2): ";
    cin >> choice;
    switch (choice)
    {
    case 1: {
        cout << "Count from: ";
        cin >> a;
        cout << "To: ";
        cin >> b;
        auto x = high_resolution_clock::now();
        for (long long i = a; i <= b; i++) {
            cout << i << "\n";
        }
        auto y = high_resolution_clock::now();
        cout << "took " << duration_cast<milliseconds>(y - x).count() << " ms" <<  endl;
        break;
    }
    
    case 2: {
        cout << "Count from: ";
        cin >> a;
        cout << "To: ";
        cin >> b;
        auto x = high_resolution_clock::now();
        for (long long i = a; i <= b; i++) {
            cout << "\r" << i << flush;
        }
        auto y = high_resolution_clock::now();
        cout << "took " << duration_cast<milliseconds>(y - x).count() << " ms" <<  endl;
        break;
    }
    default:
        cout << "not an option!" << endl;
        goto start;
        break;
    }
}
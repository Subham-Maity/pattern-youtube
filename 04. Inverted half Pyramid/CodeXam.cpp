// C++ program to print inverted half pyramid using stars
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    if (rows > 0) {
        cout << endl;
        for (int i = rows; i >= 1; i--) {
            for (int j = 1; j <= i; j++)
                cout << "*" << " ";
            cout << endl;
        }
    }
    
    return 0;
}
#include <iostream>
using namespace std;
 int main() {
     int n = 4;
     //upper part
     for(int i=1; i<=n; i++) {
         for(int j=1; j<=i; j++) {
             cout << "*";
         }
         int spaces = 2 * (n-i);
         for(int j=1; j<=spaces; j++) {
             cout << " ";
         }
         for(int j=1; j<=i; j++) {
             cout << "*";
         }
         cout << endl;
     }
     //lower part
     for(int i=n; i>=1; i--) {
         for(int j=1; j<=i; j++) {
             cout << "*";
         }
         int spaces = 2 * (n-i);
         for(int j=1; j<=spaces; j++) {
             cout << " ";
         }
         for(int j=1; j<=i; j++) {
             cout << "*";
         }
         cout << endl;
     }
     return 0;
 }
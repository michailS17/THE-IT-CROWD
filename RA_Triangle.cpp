#include <iostream>
using namespace std;
int main() {
int counter =0;
cout << "Enter num of rows: ";
int rows;
cin >> rows;
  //// with * symbol.
    for (int r = 0; r <= 4; r ++ ) {
        for (int c = 0; c<=r; c++){
            cout << "*";
        }
        cout << endl;
    }

///// with numbers

for (int r = 0; r <= 4; r ++ ) {
        for (int c = 0; c<=r; c++){
            cout << c;
        }
        cout << endl;
    }
 
}

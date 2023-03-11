#include<iostream>
using namespace std;

int main() {
    string snt = "I am Michael Getu";
  //first method
    // for (int l=0; l< snt.length(); l++) {
    //     snt[l] = toupper(snt[l]);
    // }
    //     cout << snt;
  // second method 
  for (char s : snt) {
        cout << "(" << char(toupper(s)) << ")";
    }
}

#include<iostream>
using namespace std;

int main() {
    for (int i=0; ; i++) {
    int num;
    cout << "\t Printing Patterns"<<endl;
    cout << "To see some of the patterns enter a number from 1 to 16: ";
    cin >> num;
    switch(num) {
        case 1:
    {cout << "Program that prints numbers from 10 to 49 with"<<
            "a new line after 10 ittirations each"<<endl;
    int first_num = 10, second_num=49;
    {
        for (int i=1; i<=4;i++ ) {
            for (int j=1; j<=10; j++) {
                cout << first_num<<" ";
                first_num++;
                if (first_num>second_num) {
                    break;
                }
            }
            cout << endl;
        }
    }
       // Method 2
//     {
//     for (int i=10; i<=49; i++) {
//     cout << i<<" ";
//     if (i%10==9) {
//         cout <<endl;
//     }
//    } 
//    cout << endl;
// }
    }
    break;
    case 2: 
    {
    cout << " Program that prompts the user for range of numbers"<<
                "and ittrates those numbers with a new line after 10 ittiration each."<<endl;
    cout << "Enter the first number: ";
    int num1;
    cin >> num1;
    cout << "Enter the number you want to ittirate upto: ";
    int num2;
    cin >> num2;
    {
   for (int i=num1; i<=num2; i++) {
    cout << i<<" ";
    if (i%10==9) {
        cout <<endl;
    }
   } 
   cout << endl;  
    }
    }
    break;
    case 3:
    {
    cout << "Program that Prints a Rectangle with hash"<<endl;
   for (int i=1; i<=4; i++) {
    for (int j=1;j<=7; j++) {
        cout << "* ";
    }
        cout << endl;
        }
    }
    break;
    case 4:
    {
    cout << "A program for rectangle whose inside is emptyspace."<<endl;
    for (int i=1; i<=8; i++) {
    for (int j=1; j<=8; j++) {
        if (i==1||j==1||i==8||j==8) {
            cout << " * ";
        }
        else
            cout << "   ";
    }
    cout << endl;
    } 
    }
    break;
    case 5:
    {
    cout << "Program that prints a Half pyramid"<<endl;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
    }
    break;
    case 6:
    {
    cout << "program that prints an inverted Half pyramid"<<endl;
  for (int i = 7; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
    }
    break;
    case 7:
    {
  cout <<" A program that Prints a Hollow Inverted Half Pyramid"<<endl;
  for(int i=6;i>=1;i--){
        if(i==6){
            for (int j=1;j<=6;j++){
                cout<<"* ";
            } 
        }  if(i>=1 && i<=5){
            cout<<"* ";
            for(int j=1;j<=(i-2);j++){
                cout<<"  ";
            } if(i>=2 &&i<=5){cout<<"*";}
        }
        
            cout<<endl;
    }
    }
    break;
    case 8:
    {
    cout << " A program that prints a Full pyramid"<<endl;
    int k;
    for(int i=1;i<=6;i++){
    k=0;
     for(int j=1;j<=6-i;j++){
        cout<<" ";
     }  while(k!=(i)){
        cout<<"* ";
        k++;
     } cout<<endl;
 }  
    }
    break;
    case 9:
    {
  cout << " A Program that prints an inverted Full Pyramid"<<endl;
  int k;
  for(int i=6;i>=1;i--){
        k=0;
        for(int j=1;j<=6-i;j++){
            cout<<" ";
        }while(k!=i){
            cout<<"* ";
            k++;
        } cout<<endl;
    } 
    }
    break;
    case 10:
    {
        cout << "Program that prints a Hollow Full Pyramid"<<endl;
    for(int i = 1; i<=6; i++) {
      for(int j = 1; j<=(6-i); j++) {
         cout << " ";
      }
      if(i == 1 || i == 6) { 
         for(int j = 1; j<=i; j++) {
            cout << "* ";
         }
      }else{
         cout << "*"; 
         for(int j = 1; j<=2*i-3; j++) { 
            cout << " ";
         }
         cout << "*";
      }
      cout << endl;
    }
    }
    break;
    case 11:
    {
    cout << " Program for a rectangle with numbers"<<endl;
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            cout << " "<<j;
        }
        cout << endl;
    }
    }
    break;
    case 12:
    {
    cout << "Program that prints a Half pyramid with loping numbers";
    for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
      cout << j << " ";
    }
    cout << endl;
  } 
    }
    break;
    case 13:
    {
    {
    cout << "Program for Inward Half pyramid with numbers"<<endl;
     for(int i=5;i>=1;i--){
        int j=1;
        while (j!=i){
            cout<<"  ";
            j++;
        } 
        if(j==i){
            for(j=i;j<=5;j++){
            cout<<j<<" ";
                }    }
                cout<<endl;} }
    }
    break;
    case 14:
      {
    cout << "Program for a rectangle that prints the lowercase alphabets"<<endl;
    for (int i=1; i<=5; i++) {
        for (int j=1; j<=5; j++) {
            cout <<" "<<char(j+96);
        }
        cout << endl;
        }
    }
    break;
    case 15:
    {
    int num_l = 65;
    cout << "Program for a rectangle that prints the Alphabet in uppercase"<<endl;
    for (int i=1; i<=4; i++) {
    for (int j=1; j<=6; j++) {
        cout << char(num_l)<<" ";
        num_l++;
    }
    cout << endl;
   }
    }
    break;
    case 16:
    {
    cout << "Program for a Half Pyramid with uppercase Alphabet";
   for (int i=0; i<5; i++) {
        for (int j=0; j<i; j++) {
            cout << char(j+65)<<" ";
    }
    cout << endl;
        }
    }
        break;
        default:
        cout << "Please input a valid number of your question";
    }
}
    return 0;
}    

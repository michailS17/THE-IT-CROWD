#include<iostream>
using namespace std;
    // This is a program which informs the user what type of symbol he entered.
int main()

{
    for (int i=0; ; i++)
    {
    char ch;
    cout << "\n Enter a symbol of your choice: "<<endl;
    cin >> ch;
    {
    if (ch >= '0' && ch <='9')
            // With an If statement
    
    /*{
        cout << "This is an even digit";
    }
    else if (ch >= '0' && ch<='9' && ch%2!=0)
    {
    {
        cout << "This is an odd digit";
    }*/
    {   switch (ch%2)
        {
            case 1:
            cout << "This is an odd number";
            break;
            default:
            cout << "This is an even number";
        }
    }
    
    else if (ch >= 'a' && ch <='z')
    {
        if (ch == 'a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout << "This is a vowel lowercase letter";
        else 
            cout << "This is a conconant lowercase letter";
    }   

        // With a switch statement
    /*
    {
        switch(symbol)
        {
            case 'a':
            cout << "This is a vowel";
            break;
            case 'e':
            cout << "This is a vowel";
            break;
            case 'i':
            cout << "This is a vowel";
            break;
            case 'o':
            cout << "This is a vowel";
            break;
            case 'u':
            cout << "This is a vowel";
            break;
            default:
            cout << "This is a consonant";
        }
    }
    */
    else if (ch >= 'A' && ch <='Z')
    {
        if (ch == 'A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            cout << "This is a vowel uppercase letter";
        else 
            cout << "This is a conconant uppercase letter";
    }

        // With a switch statement
    /*
    {
        switch(symbol)
        {
            case 'A':
            cout << "This is a vowel";
            break;
            case 'E':
            cout << "This is a vowel";
            break;
            case 'I':
            cout << "This is a vowel";
            break;
            case 'O':
            cout << "This is a vowel";
            break;
            case 'U':
            cout << "This is a vowel";
            break;
            default:
            cout << "This is a consonant";
        }
    }
    */
    else 
    {
        cout << "This  is a special character."<<endl;
    }    
    }
    }
}

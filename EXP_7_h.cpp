//Piyush Pawar
//24070123145
//B3    

#include <iostream>
using namespace std;

int main()
{
    string a ;
    cout << "Enter a string: ";
    cin >> a ;
    int d = 0;
    int x = a.length();
    for (int i = 0; i <= x / 2; i++) 
        if (a[i] != a[x - i - 1]) 
        {
            d = 1;
            break;
        }
    
    if (d == 0) 
        cout << "string is a palindrome";
    
    else
        cout << "string is not a palindrome";
    
}

/*
Output:

Enter a string: madam
string is a palindrome

Enter a string: hello
string is not a palindrome
*/


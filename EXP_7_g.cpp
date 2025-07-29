//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    string str = "Hello";
    string reversedStr = str;
    for (int i = 0; i < str.length(); i++)
        reversedStr[i] =  str[str.length() - 1 - i];

    cout << "Original String: " << str << endl;
    cout << "Reversed String: " << reversedStr << endl;
    return 0;
}

/*
Output:
Original String: Hello
Reversed String: olleH
*/



//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    char a[4] = "Hey" ;
    char b[] = {'h','e','y','\0'};
    char c[4] = {'H','e','y','\0'};
    string d = "hey"; 
    cout << "Different ways to declare a string in C++ : " << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    return 0;
}

/* 
Output:  
Different ways to declare a string in C++ : 
Hey
hey
Hey
hey
*/
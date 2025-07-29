//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    
    cout << endl;
    return 0;
}

/* 
Output:
1 2 3 4 5
*/
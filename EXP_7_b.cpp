//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter a number to search: ";
    cin >> target;

    for (int i = 0; i < n; i++) 
        if (arr[i]  == target) 
            cout << "Found " << arr[i] << " at index " << i << endl;

    return 0;
}

/* 
Output:
Enter a number to search: 3
Found 3 at index 2
*/
//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] < min) 
            min = arr[i];
        if (arr[i] > max) 
            max = arr[i];
    }

    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    return 0;
}

/* 
Output:
Min: 1
Max: 5
*/

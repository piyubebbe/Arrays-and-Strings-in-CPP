//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int average;

    for (int i = 0; i < n; i++) 
        sum += arr[i];
    
    average = sum / n;
    cout << "Average: " << average << endl;
    cout << "Sum: " << sum << endl;
    return 0;
}

/* 
Output:
Average: 3
Sum: 15
*/
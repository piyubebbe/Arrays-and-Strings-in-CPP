1. Printing Array Elements
Objective: Display all elements of a given array.

Algorithm:

Start.
Declare and initialize an array.
Use a loop to iterate over the array.
Print each element.
End.

2. To Find a Number in a Given Array
Objective: Search for a number in the array and display its index if found.

Algorithm:

Start.
Input array elements.
Input the number to be searched.
Traverse the array using a loop.
If arr[i] == number, print index and break.
If not found, display "not found".
End.

3. Sum and Average of Array Elements
Objective: Calculate and display the sum and average.

Algorithm:

Start.
Initialize sum = 0.
Loop through each element and add to sum.
Calculate average = sum / n.
Print sum and average.
End.

4. To Find Minimum and Maximum Number
Objective: Identify and print the minimum and maximum values in the array.

Algorithm:

Start.
Input array elements.
Initialize min = arr[0], max = arr[0].
Loop through array:
If arr[i] < min, update min.
If arr[i] > max, update max.
Print min and max.
End.

5. Different Ways to Declare and Initialize a String
Objective: Demonstrate multiple ways to declare and initialize strings.

Examples:

char a[4] = "Hey" ;
char b[] = {'h','e','y','\0'};
char c[4] = {'H','e','y','\0'};
string d = "hey"; 
std::string str = "Hello"; (in C++)

No specific algorithm is needed here—just show variations in declaration.

6. Concatenation of Strings
Objective: Combine two strings.

Algorithm (C++ style):

Start.
Input two strings.
Use result = str1 + " " + str2;
Print result.
End.

7. Printing String in Reverse
Objective: Print a string from end to start.

Algorithm:

Start.
Input string.
Find length using strlen() or loop.
Use a reverse loop from length-1 to 0.
Print each character.
End.

8. Palindrome Checking
Objective: Check if a string is the same forward and backward.

Algorithm:

Start.
Input string.
Initialize loop: start = 0, end = length-1.
While start < end:
If str[start] != str[end], not palindrome.
Increment start, decrement end.
If loop ends, it’s a palindrome.
End.


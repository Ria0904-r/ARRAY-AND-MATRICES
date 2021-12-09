#include <iostream>
using namespace std;
 
/* C++ Function to print leaders in an array */
void printLeaders(int arr[], int size)
{
    int max_from_right =  arr[size-1];
 
    /* Rightmost element is always leader */
    cout << max_from_right << " ";
     
    for (int i = size-2; i >= 0; i--)
    {
        if (max_from_right < arr[i])
        {          
            max_from_right = arr[i];
            cout << max_from_right << " ";
        }
    }   
}
 
/* Driver program to test above function*/
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    printLeaders(arr, n);
    return 0;
}   

// Time Complexity: O(n)

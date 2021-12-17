// C++ program to find Maximum difference
// between two elements such that larger
// element appears after the smaller number
#include <bits/stdc++.h>
using namespace std;
 
/* The function assumes that there are
   at least two elements in array. The
   function returns a negative value if the
   array is sorted in decreasing order and 
   returns 0 if elements are equal */
int maxDiff(int arr[], int arr_size)
{    
  int max_diff = arr[1] - arr[0];
  for (int i = 0; i < arr_size; i++)
  {
    for (int j = i+1; j < arr_size; j++)
    {    
      if (arr[j] - arr[i] > max_diff)
        max_diff = arr[j] - arr[i];
    }
  }        
  return max_diff;
}
 
/* Driver program to test above function */
int main()
{
  
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
  }
  // Function calling
  cout << "Maximum difference is " << maxDiff(arr, n);
 
  return 0;
}

// Time Complexity : O(n^2) 
// Auxiliary Space : O(1)

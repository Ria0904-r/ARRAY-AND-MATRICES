// For each test case on a new line, print three space-separated integers representing the values of L, M, and E. 
// compare the values with given k value and classify.

#include <bits/stdc++.h>
using namespace std;


int main()
{
  int t;
  cin>>t;
  while(t--){
  int n,k;
  cin>>n>>k;
  int arr[n];
  for(int i=0;i<n;i++){
  cin>>arr[i];
  }
   int low,max,eq;
  low=0;max=0;eq=0;
  for(int i=0;i<n;i++){
    if(arr[i]<k)
       low++;
    else if(arr[i]>k)
       max++;
    else
       eq++;
  }
  cout<<low<<" "<<max<<" "<<eq<<endl;
  }
  return 0;
}

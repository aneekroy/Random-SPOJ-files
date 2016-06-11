#include <stdio.h>
 
// A utility function that returns true if there is a subset of arr[]
// with sun equal to given sum
int isSubsetSum (int arr[], int n, int sum)
{
   // Base Cases
   if (sum == 0)
     return 1;
   if (n == 0 && sum != 0)
     return 0;
 
   // If last element is greater than sum, then ignore it
   if (arr[n-1] > sum)
     return isSubsetSum (arr, n-1, sum);
 
   /* else, check if sum can be obtained by any of the following
      (a) including the last element
      (b) excluding the last element
   */
   return isSubsetSum (arr, n-1, sum) || isSubsetSum (arr, n-1, sum-arr[n-1]);
}
 
// Returns true if arr[] can be partitioned in two subsets of
// equal sum, otherwise false
int findPartiion (int arr[], int n)
{
    // Calculate sum of the elements in array
    int sum = 0;
    for (int i = 0; i < n; i++)
       sum += arr[i];
 
    // If sum is odd, there cannot be two subsets with equal sum
    if (sum%2 != 0)
       return 0;
 
    // Find if there is subset with sum equal to half of total sum
    return isSubsetSum (arr, n, sum/2);
}
 
// Driver program to test above function
int main()
{
  int arr[] = {3, 1, 5, 9, 12};
  int n = sizeof(arr)/sizeof(arr[0]);
  if (findPartiion(arr, n) !=0)
     printf("Can be divided into two subsets of equal sum");
  else
     printf("Can not be divided into two subsets of equal sum");
  getchar();
  return 0;
}

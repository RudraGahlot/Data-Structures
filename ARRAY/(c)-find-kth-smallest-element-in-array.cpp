#include <algorithm>
#include <iostream>
using namespace std;

int KthMinimum(int arr[] , int n , int k)
{
    sort(arr , arr+n);
    return(arr[k-1]);
}

int main()
{
   int arr[]= {12 , 3 , 4 , 6 , 8 , 5};
   int n = sizeof(arr)/sizeof(arr[0]) , k=3;
   cout<<"Kth minimum element is "<<KthMinimum(arr , n , k);
    return 0;
}

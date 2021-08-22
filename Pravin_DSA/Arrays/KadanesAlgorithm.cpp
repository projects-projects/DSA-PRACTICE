#include<iostream>

using namespace std;

int max_so_far = INT_MIN;
int max_ending_here = 0;

int findKadane(int a[], int n);

int main()
{
    int n;
    cout<<"Enter the no of array elements;";
    cin>>n;
    int a[n];
    cout<<"Enter array elements:";
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    max_so_far = findKadane(a, n);
    cout<<"Largest sum contiguous subarrays is :"<<max_so_far;
}

int findKadane(int a[], int n)
{
    for(int i=0; i<n; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if(max_so_far < max_ending_here)
            max_so_far = max_ending_here;
        if(max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
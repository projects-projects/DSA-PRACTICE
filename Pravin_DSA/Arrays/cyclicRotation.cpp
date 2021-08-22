#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of arrays:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
        cin>>a[i];
    
    int temp = a[n-1];

    for(int i=n-1; i>=1; i--)
    {
        a[i] = a[i-1];
    }
    a[0] = temp;

    cout<<"After rotation\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
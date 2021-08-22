#include<bits/stdc++.h>

using namespace std;

void sortNeg(int a[], int n);


int main()
{
    int n;
    cout<<"Enter the array element:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sortNeg(a, n);
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}

void sortNeg(int a[], int n)
{
    int j=0;
    for(int i=0;i<n; i++)
    {
        if(a[i]<0)
        {
            if(i != j)
                swap(a[i], a[j]);
            j++;
        }
    }
}
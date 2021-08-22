#include<iostream>

using namespace std;

void sort012(int a[], int n);

int main()
{
    int n;
    cout<<"Enter the number of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort012(a, n);
}

void sort012(int a[], int n)
{
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i=0; i<n; i++) 
    {
        if(a[i]==0)
            c0++;
        else if(a[i]==1)
            c1++;
        else
            c2++;
    }
    int i;
    for(i=0; i<c0; i++) cout<<0<<" ";
    for(i=0; i<c1; i++) cout<<1<<" ";
    for(i=0; i<c2; i++) cout<<2<<" ";
}
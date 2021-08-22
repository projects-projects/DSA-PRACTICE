#include <iostream>

using namespace std;

void reverseAnArray(int a[], int start, int end) {
    int temp;
    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
int main()
{
    int n;
    cout<<"Enter t(he number of elements:\n";
    cin>>n;
    int a[n];   
    cout<<"Enter an array of elements:\n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];            
    }
    reverseAnArray(a, 0, n-1);
    cout<<"The reversed array is:\n";

    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
}
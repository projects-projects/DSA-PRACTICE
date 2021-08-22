#include <iostream>

using namespace std;

typedef struct FindMaxMin {
    int max;
    int min;
}ele;

ele find(int a[], int n);

int main()
{
    int n;
    cout<<"Enter number of arrays: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of arrays:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    ele ans = find(a,n);
    cout<<"The minimum number in the array is "<< ans.min <<"\n";
    cout<<"The maximum number in the array is " << ans.max<<"\n";   
}

ele find(int a[], int n)
{
    ele s;
    s.max = a[0];
    s.min = a[0];
    cout<<n<<"\n";
    for(int i=0; i < n; i++)
    {
        if (a[i] < s.min)
            s.min = a[i];
        else if(a[i]> s.max)
            s.max = a[i];
    }
    return s;
}
#include<iostream>
#include<algorithm>

using namespace std;

typedef struct FindMaxMin {
    int max;
    int min;
}ele;

ele findKth(int a[], int n, int k);

int main()
{
    int n;
    cout<<"Enter the number of array:";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int k;
    cout<<"Enter the K'th number:";
    cin>>k;
    ele ans = findKth(a, n, k);
    cout<<"The "<< k <<"th minimum number in the array is "<< ans.min <<"\n";
    cout<<"The "<< k <<"th maximum number in the array is " << ans.max<<"\n";
}

ele findKth(int a[], int n, int k)
{
    ele s;
    sort(a, a+n);
    s.min = a[k-1];
    s.max = a[n-k];
    return s;
}
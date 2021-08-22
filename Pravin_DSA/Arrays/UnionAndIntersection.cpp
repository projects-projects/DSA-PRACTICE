#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter first array size:";
    cin>>m;
    int arr1[m];
    cout<<"Enter first array:";
    for(int i=0; i<m; i++)
        cin>>arr1[i];
    cout<<"Enter size of second array:";
    cin>>n;
    int arr2[n];
    cout<<"Enter second array: ";
    for(int i=0; i<n; i++)
        cin>>arr2[i];
    
    set<int> s;
    
    s.insert(arr1, arr1+m);
    s.insert(arr2, arr2+n);

    cout<<"The size of the union set is:"<<s.size();


}
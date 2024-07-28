#include<bits/stdc++.h>
using namespace std;
void insertion(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j]<a[j-1])
        {
            swap(a[j],a[j-1]);
            j--;
        }
    }
}
int main()
{
    int n,x;
    cout << "Enter number of elements in array : ";
    cin >> n;
    cout<<"Enter elements in array : ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    cout<<"Sorted array : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
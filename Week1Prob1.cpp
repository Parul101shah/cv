#include<iostream>
using namespace std;
#define N 100
int LinearSearch(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return (i+1);   
    }
    return 0;
}

int main()
{
    int t,n,key;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>key;
        int a=LinearSearch(arr,n,key);
        if(a)
            cout<<"Present "<<a<<endl;
        else
            cout<<"Not Present "<<n<<endl;
    }
}

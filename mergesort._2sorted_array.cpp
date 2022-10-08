#include<iostream>
using namespace std;
void merge(int a[],int b[], int n, int m)
{
    int i=0,j=0;
    while(i<n&&j<m)
    {
        if(a[i]<=b[j]){
            cout<<a[i]<<" ";
            i++;
        }
        else
            cout<<b[j]<<" ";
            j++;
    }
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    while(j<m)
        cout<<b[j]<<" ";
        j++;
}
int main()
{
    int a[]={10,20,50},b[]={5,50,50};
    int n=sizeof(a)/sizeof(a[0]);
    int m=sizeof(b)/sizeof(b[0]);
    merge(a,b,n,m);
    return 0;
}

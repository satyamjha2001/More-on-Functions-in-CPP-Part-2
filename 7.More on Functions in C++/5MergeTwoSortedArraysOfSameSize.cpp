#include<iostream>
using namespace std;
void merge(int*,int*,int);
int main() {
int size,a[30],b[30];
cout<<"Enter size of Array"<<endl;
cin>>size;
cout<<"Enter values of Array 1 in sorted order"<<endl;
for(int i=0;i<size;i++)
{
    cin>>a[i];
}
cout<<"Enter values of Array 2 in sorted order"<<endl;
for(int i=0;i<size;i++)
{
    cin>>b[i];
}
merge(a,b,size);
return 0;
}
void merge(int a[],int b[],int size)
{
    int i,j,k,n=2*size;
    int c[n];
    for(i=0,j=0,k=0;i<size&&j<size;k++)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }
    while(i<size)
    {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<size)
    {
        c[k]=b[j];
        j++;
        k++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
}
#include<iostream>
using namespace std;
void checking(int a[],int n,int target)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(a[i]+a[j]==target)
      {
        if(a[i]>a[j])cout<<a[j]<<" and "<<a[i]<<endl;
        else cout<<a[i]<<" and "<<a[j]<<endl;
      }
    }
  }
}
int main() {
  int n,target;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  {cin>>a[i];
  cout<<endl;}
  cin>>target;
  checking(a,n,target);
	return 0;
}

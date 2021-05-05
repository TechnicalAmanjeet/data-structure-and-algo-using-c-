#include<bits/stdc++.h>
using namespace std;

struct ps
{
  int min;
  int max;
};

struct ps function(int , int);

struct ps function(int arr[n],int n )
{
   /*start writing code here */
   struct ps p;
   p.min=arr[0];
   p.max=arr[0];
   for(int i=0;i<n;i++)
   {
     if(p.min > arr[i]){p.min=arr[i];}
     if(p.max < arr[i]){p.max=arr[i];}
   }
   return p;
}

int main()
{  
  
  /* start main function writing */
  int n=5;
  //cin>>n;
  int arr[n]={2,5,1,6,4};
  struct ps s;
  s=function(arr[n],n);
  cout<<s.min<<" "<<s.max;
  return 0;
}
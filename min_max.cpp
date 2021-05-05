#include<bits/stdc++.h>
using namespace std;

struct pair{
  int min;
  int max;
};

struct pair function(int arr[],int n )
{
   /*start writing code here */
   struct pair p;
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
  struct pair function(int ,int );
  /* start main function writing */
  int n;
  cin>>n;
  int arr[n];
  struct pair s;
  s=function(arr[],n);
  cout<<pair.s;
  return 0;
}
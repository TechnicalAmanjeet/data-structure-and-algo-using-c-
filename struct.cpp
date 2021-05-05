#include<bits/stdc++.h>
using namespace std;

struct  student
{
  string name;
  int  roll;
  string girlfriend;
};


int main()
{
  struct student s={"Amanjeet",1,"Neha"};
  cout<<s.name<<" "<<s.roll<<" "<<s.girlfriend<<endl;
  return 0;
}
#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++
// Mathod 1.
string reverseWord(string str){
    
  //Your code here
  string s="";
  for(int i=str.size()-1;i>=0;i--)
  {
    s.push_back(str[i])
  }
  return s;
}

// Mathod 2.
string reverseWord(string str){
    
  //Your code here
  string s="";
  int l=str.length();
  for(int i=0;i<l/2;++i)
  {
    s[i]=str[l-i-1];
    s[l-i-1]=str[i];
  }
  return s;
}

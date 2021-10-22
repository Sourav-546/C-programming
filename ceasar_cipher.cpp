#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s1;
  int key,i=0;
  cout<<"Enter the string\n";
  cin>>s1;
  cout<<"Enter the key\n";
  cin>>key;
  while(s1[i]!='\0')
    {
        s1[i]=(s1[i]+key);
        i++;
    }
  cout<<s1;
  return 0;
}

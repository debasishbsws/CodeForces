//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
//░░░██████╗░██╗░░██╗░██╗░░░██╗░██████╗░░██╗░░██╗░░
//░░██╔════╝░██║░░██║░██║░░░██║░██╔══██╗░██║░░██║░░
//░░╚█████╗░░███████║░██║░░░██║░██████╦╝░███████║░░
//░░░╚═══██╗░██╔══██║░██║░░░██║░██╔══██╗░██╔══██║░░
//░░██████╔╝░██║░░██║░╚██████╔╝░██████╦╝░██║░░██║░░
//░░╚═════╝░░╚═╝░░╚═╝░░╚═════╝░░╚═════╝░░╚═╝░░╚═╝░░
//░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 vector<int> a;
 for(int i=0;i<n;i++)
 {
   int p;
   cin>>p;
   a.push_back(p);
 }
 int re=0;
 for(int i=0,r=0;i<n;i++)
  {
     r=max(r,a[i]);
     if(i+1==r)
      ++re;
  }
   cout<<re;
 return 0; 
}
// ░██████╗██╗░░██╗██╗░░░██╗██████╗░██╗░░██╗
// ██╔════╝██║░░██║██║░░░██║██╔══██╗██║░░██║
// ╚█████╗░███████║██║░░░██║██████╦╝███████║
// ░╚═══██╗██╔══██║██║░░░██║██╔══██╗██╔══██║
// ██████╔╝██║░░██║╚██████╔╝██████╦╝██║░░██║
// ╚═════╝░╚═╝░░╚═╝░╚═════╝░╚═════╝░╚═╝░░╚═╝
 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
 
    int t=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
            cout<<a[i]/2<<"\n";
        else
        {
            cout<<(a[i]+t)/2<<"\n";
            t=t*(-1);
        }
    }
}
 
 

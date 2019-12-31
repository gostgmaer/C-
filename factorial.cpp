/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    long n,k=0,ans=1;
    cout<<"Enter Number:";
    cin>>n;
    for(int i=1;i<=n;i++){
       // cout<<i<<"*"<<i-1<<"="<<i*(i-1)<<"\n";
        ans=ans*i;
        cout<<i<<"! ="<<i<<"*"<<ans/i<<"="<<ans<<endl;
    }
   // cout<<ans;
    cout<<endl;

    return 0;
}

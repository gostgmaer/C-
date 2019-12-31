/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b=1,c,k=0,ans=1;
    cout<<"Enter Number:";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=2;i<n;i++){
       c=a+b;
       cout<<c<<" ";
       a=b;
       b=c;
       
       
    }
   // cout<<ans;
    cout<<endl;

    return 0;
}

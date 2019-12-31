/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int i;
    long n,k=0,ans=1;
    cout<<"Enter Number:";
    cin>>n;
    for( i=2;i<n/2;i++){
        if (n%i==0)
        {
          cout<<"Not a prime !\n";
          break;
        }        
    }
    if (i==n/2)
    {
      cout<<"Is a prime";
    }
   // cout<<ans;
    cout<<endl;

    return 0;
}

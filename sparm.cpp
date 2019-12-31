
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int i,j,n,k=0;
    cout<<"Enter Number for Pyramid pattern: ";
    cin>>n;
    for(i=2;i<=n;i++,k=0){
        while(k != n-i){
            cout<<" ";
            k++;
        }
        for(j=1;j<=2*i-1;j++){
                cout<<"*";
        }
         cout<<endl;
    }
     for(i=n-1;i>=1;i--,k=0){
        while(k != n-i){
            cout<<" ";
            k++;
        }
        for(j=1;j<=2*i-1;j++){
                cout<<"*";
        }
         cout<<endl;
    }
      for(i=2;i<=n-2;i++,k=0){
        while(k != n-i){
            cout<<" ";
            k++;
        }
        for(j=1;j<=2*i-1;j++){
                cout<<"*";
        }
         cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k=0;
	cin>>n;
	for (int i = 1; i <=n ;++i,k=0)
	{
		while(k!= (n-i)){
			cout<<" ";
			k++;
		}
		for (int j = 1; j <= 2*i-1; ++j)
		{
			if (j==1 || j==2*i-1)
			{
				cout<<i;
			}
			else	
				cout<<"0";
		}

		cout<<endl;
	}
		
	
	return 0;
}
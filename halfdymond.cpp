#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k=0;
	cin>>n;
	for (int i = 1; i <= n; ++i,k=0)
	{
		for (int j = 1; j <=n-i; ++j)
		{
			cout<<" ";
		}
		while(k != (2*i)-1){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

	

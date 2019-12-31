
#include <iostream>

using namespace std;
void selection(int arr[], int n){
    int temp,minIndex;
    
	 for (int i = 0; i < n-1; ++i)
    {
    	minIndex=i;
    	for (int j = i+1; j < n; ++j)
    	{
    		if (arr[minIndex]>arr[j])
    		{
    			minIndex=j;
    		}
    	}
    	temp=arr[minIndex];
    	arr[minIndex]=arr[i];
    	arr[i]=temp;
    }
}
int main()
{
    int arr[999],n;
    cout<<"Enter Element range: ";
    cin>>n;
    cout<<"Enter Element: ";
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
    cout<<"Unsorted list: ";
    for (int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }
  	selection(arr,n);
     cout<<"sorted list: ";
    for (int i = 0; i < n; ++i)
    {
    	cout<<arr[i]<<" ";
    }

    return 0;
}

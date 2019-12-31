#include <iostream>
using namespace std;
void swap(int a ,int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"A "<<a<<endl<<"B "<<b<<endl;
}
int main(int argc, char const *argv[])
{
    int x,y;
    cout<<"Enter X value and Y value to swap:";
    cin>>x>>y;
    swap(x,y);
    cout<<"x "<<x<<endl<<"y "<<y<<endl;
	return 0;
}
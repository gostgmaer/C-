#include <iostream>
#include <string>
using namespace std;

class laptop
{
public:
	laptop(){
		cout<<"base class called"<<endl;
	}
	string name;
	float price;	
};

class gaminglaptop : public laptop
{
public:
	gaminglaptop(){
		cout<<"Derive class 1 call:"<<endl;
	}
	string name;
	int vram;
	
};
class gamingsystem : public gaminglaptop
{
public:
	gamingsystem(){
		cout<<"Derived class 2 called"<<endl;
	}	
};
int main(int argc, char const *argv[])
{
	gamingsystem gl;
	return 0;
}
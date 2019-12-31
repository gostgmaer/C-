#include <iostream>
#include <string>
using namespace std;
class cons
{
public:
	string name;
	float price;
	cons(){
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;
	}
	cons(string lname, float lprice){
		//strcpy(name,"Windows");
		//name="Windows";
		//price=100.00;
		name=lname;
		price=lprice;
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;

	}
	cons(const cons &p){
		//strcpy(name,"Windows");
		//name="Windows";
		//price=100.00;
		name=p.name;
		price=p.price+100.5;
		cout<<"Name: "<<name<<endl<<"Price: "<<price<<endl;


	}
};
int main(int argc, char const *argv[])
{
	cons c;
	cons s("windows",100.0);
	cons k=s;
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
class laptop
{
public:
    string name;
    string brand; 
    float price;
    string processor;

    void getdata(){
    	cout<<"name: ";
    	cin>>name;
    	cout<<"brand: ";
    	cin>>brand;
    	cout<<"price: ";
    	cin>>price;
    	cout<<"processor: ";
    	cin>>processor;
    }    
    void showdata(){
    	cout<<"name: "<<name<<"\n brand: "<<brand<<"\nprice: "<<price<<"\nprocessor: "<<processor;

    }
    void startup(){
    	cout<<" laptop "<<name<<" is Staring";
    }
    void shutdown(){
    	cout<<" laptop "<<name<<" is shupdown";
    }


}
;
int main(int argc, char const *argv[])
{
   laptop laptop1;
   laptop1.getdata();
   laptop1.showdata();
   laptop1.startup();
   laptop1.shutdown();

	return 0;
}
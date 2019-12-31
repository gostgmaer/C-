#include <iostream>
#include <string>
using namespace std;
void run(){
	cout<<"run is running \n";
}
void run(int a){
	cout<<"run is int "<<a<<" is running\n";
}
void run(char a){

}
void run(int a,int b){

}
void run(int a,char b){
	
}
int main(int argc, char const *argv[])
{
	run();
	run(5);
	return 0;
}
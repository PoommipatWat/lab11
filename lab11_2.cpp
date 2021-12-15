#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string textline;
	dest << "-------------------- BOOM ---------------------";
	while (getline(source, textline)){
		dest << "\n";
		dest << textline << endl;
		getline(source, textline);
		dest << textline;
	}
	dest << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();
	return 0;
}

#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;

int main (){
	ifstream source;
	source.open("score.txt");

    string textline;
    double numline, sum, mean, sd;
    int num = 0;
    while (getline(source, textline))
    {
        numline = atof(textline.c_str());
        sum += numline;
        num++;
    }
    source.close();
    mean = sum/num;

    source.open("score.txt");
    while (getline(source, textline))
    {  
        numline = atof(textline.c_str());
        sd += pow((numline-mean),2);
    }
    source.close();
    sd /= num;
    sd = sqrt(sd);
    cout << setprecision(3);
    cout << "Number of data = " << num << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
	return 0;
}


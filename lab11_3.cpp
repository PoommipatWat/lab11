#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<cmath>
using namespace std;

int main (){
	ifstream source;
	source.open("score.txt");

    string textline;
    double numline, sum, mean, sd;
    int num = 0;
    while (true)
    {
        getline(source, textline);
        if (textline == "") break;
        numline = atof(textline.c_str());
        sum += numline;
        num++;
    }
    source.close();
    mean = sum/num;

    source.open("score.txt");
    while (true)
    {
        getline(source, textline);
        if (textline == "") break;
        numline = atof(textline.c_str());
        sd += pow((numline-mean),2);
    }
    source.close();
    sd /= num-1;
    sd = sqrt(sd);

    cout << "Number of data = " << num << endl;
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;
	return 0;
}


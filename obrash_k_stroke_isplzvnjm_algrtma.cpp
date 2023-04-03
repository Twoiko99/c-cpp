#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{ 
    string sampleStr("hello String! mi tebja perevernem!");
    cout<< "ishodnaja stroka: "<<endl;
    cout<<sampleStr<<endl<<endl;
    reverse(sampleStr.begin(),sampleStr.end());
    cout<<"posle algorithma std::reverse: "<<endl;
    cout<<sampleStr<<endl;


    return 0;
}
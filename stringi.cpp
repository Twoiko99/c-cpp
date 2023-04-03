#include<string>
#include<iostream>

int main()
{
    using namespace std;
    const char* c = "Hello Wor";
    cout<<"konst stroka: "<<c<<endl;
    string strFromConst(c);//konstruktor
    cout<<"strFromConst: "<<strFromConst<<endl;
    string str2("hello str");
    string str2copy(str2);
    cout<<"str2Copy: "<<str2copy<<endl;

    //inicializacija stroko pervimi 5 simvolami drugoi stroki
    string strKopijaChasti(c,5);
    cout<<" strKopijaChasti: "<<strKopijaChasti<<endl;
    //inicializiruem stroku 10 'a'
    string a10(10,'a');
    cout<<"a10: "<<a10<<endl;


    return 0;
}
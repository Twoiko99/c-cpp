#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> intArray;//dinamicheskij massiv celix chisel
    intArray.push_back(50);
    intArray.push_back(2000);
    intArray.push_back(324);
    intArray.push_back(3);

    cout<<"soderzhimoje vectora: "<<endl;
    //obhod vectora i chtenije znachenij s pomoshju iteratora
    vector <int>::iterator arrIterator = intArray.begin();

    while(arrIterator != intArray.end())
    {
        cout<<*arrIterator<<endl;
        ++arrIterator;//increment dlja dostupa k sledujushemu elementu
    }



    //poisk elementa 324 s pomoshje algoritma 'find'
    vector <int>::iterator isheika = find(intArray.begin(),intArray.end(),324);

    //proverka nashol li 
    if(isheika != intArray.end())
    {
        //znachenije naideno opredeljajem poziciju v massive
        int posicia = distance(intArray.begin(),isheika);
        cout<<"znachenije"<<*isheika;
        cout<<" nahoditsa v pozicii-"<<posicia<<endl; 
    }
    else
    {
        cout<<"nichego ne nashol";

    }

    return 0;

}
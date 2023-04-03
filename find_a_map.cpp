#include<iostream>
#include<string>
#include<map>
using namespace std;

template<typename T>
void DisplayContents(const T& cont)
{
    for (auto element = cont.cbegin;element!=cont.cend();++element)
    {
        cout<<element->first<<"->"<<element->second<<endl;

    }
    cout<<endl;
}
int main()
{
    map<int,string> mapIntToString;
    mapIntToString.insert(make_pair(3,"Three"));
    mapIntToString.insert(make_pair(5,"five"));
    mapIntToString.insert(make_pair(1,"one"));
    mapIntToString.insert(make_pair(6,"six"));
    cout<<"multimap soderzhit"<<mapIntToString.size();
    cout<<"pari. eto:"<<endl;

    //vivod siderzhomogo na ekran

    DisplayContents(mapIntToString);
    cout<<"vvedite kljuch dlja poiska";
    int Key = 0;
    cin >> Key;

    auto pairFound = mapIntToString.find(Key);
    if( pairFound != mapIntToString.cend())
    {
        cout<<"kljuch "<<pairFound->first<<"ukazivajet na";
        cout<<"znachenije"<<pairFound->second<<endl;
    }

    else
    {
        cout<<"kljuch"<<Key<<" ne naiden";
        <<endl;
    
    }





    return 0;
}
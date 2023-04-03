#include<map>
#include<string>
#include<iostream>


template <typename KeyType>
struct ReverseSort
{
    bool operator()(const KeyType& key1,const KeyType& key)
    {
        return(key1 > key2);
    }
};

int main ()
{   
    using namespace std;
    //map i multimap dlja kluchei so znache nijem string
    map<int,string> mapIntToStr1;
    multimap<int,string> mmapIntToStr1;
    //map i multimap sozdajetsa kak kopii drugogo konteinera
    map<int,string> mapIntToStr2(mapIntToStr1);
    multimap<int,string> mmapIntToStr2(mmapIntToStr1);
    //map i multimap sozdautsja kak chasti drugogo konteinera
    map<int,string> mapIntToStr3(mapIntToStr1.cbegin(),mapIntToStr1.cend());
    multimap<int,string> mmapIntToStr3(mmapIntToStr1.cbegin(),mmapIntToStr1.cend());

    //map i multi map s sortirovkoi v obratnom porjadke
    map<int,string,ReverseSort<int>>mapIntToStr4(mapIntToStr1.cbegin(),mapIntToStr1.cend());
    multimap<int,string,ReverseSort<int>>mmapIntToStr4(mapIntToStr1.cbegin(),mapIntToStr1.cend());
    
    return 0;

}
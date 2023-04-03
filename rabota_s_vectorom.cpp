#include <vector>
#include <iostream>
using namespace std;

void DisplayVector(const vector<int>& inVec)
{
    for(auto element = inVec.cbegin();element !=inVec.cend();++element)//auto element skoree vsego void* element
    {
        cout<<*element<<' ';
    }
    cout<<endl;
}








int main()
{ vector <int> integers(4,90);//sozdaem ekzempljar vectora s 4 elementami u kotorix znachenije 90
cout<<"chisla v vectore: ";
DisplayVector(integers);
//vstavitj v nachalo 25
integers.insert(integers.begin(),25);
//vstavitj v nachalo 2 chisla so znachenijem 45
integers.insert(integers.end(),2,45);
cout<<"soderzhimoje vectora posle raboti s nim: ";
DisplayVector(integers);

//drugoi vector

vector <int> vec2(2,30);

integers.insert(integers.begin() +1,vec2.begin(),vec2.end());//vstavitj 2 elementa v poziciju [1]

cout<<"vector posle vstavki iz vec2: "<<endl;
DisplayVector(integers);



    return 0;
}
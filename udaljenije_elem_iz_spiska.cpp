#include<iostream>
#include<list>

using namespace std;

template<typename T>
void DisplayContent(const T& container)
{
    for(auto element=container.cbegin(); element != container.cend; ++element)
    {
        cout<<*element<<' ';

    }
    cout<<endl;
}

int main()
{
    std::list <int> linkInts{4,3,5,-1,2017};
    //sohranajem iterator poluchennij ot funkcii insert
    auto val2 = linkInts.insert(linkInts.begin(),2);

    cout<<"ishodnoje soderzhimoje spiska:"<<endl;
    DisplayContent(linkInts);

    cout<< "posle udalenija elementa '"<<*val2<<"':"<<endl;
    linkInts.erase(val2);
    DisplayContent(linkInts);
    linkInts.erase(linkInts.begin(),linkInts.end());
    cout<<"kolichestvo elementov posle udalenija diapazona: ";
    cout<<linkInts.size()<<endl;



    return 0;
}
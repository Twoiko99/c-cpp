#include<forward_list>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
    for (auto element = container.cbegin();element !=container.cend();++element)
    {
        cout<<*element<<' ';

    }
    cout<<endl;
}

int main()
{
    forward_list<int> flistIts{3,4,2,2,0};
    flistIts.push_front(1);
    cout<<"soderzhimoje forward lista: "<<endl;
    DisplayContents(flistIts);
    
    flistIts.remove(2);
    flistIts.sort();
    cout<< "soderzhimoje posle udalenija sortirovki:"<<endl;
    DisplayContents(flistIts);



    return 0;
}
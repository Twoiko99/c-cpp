#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{ 
    //opredelenije dvuxstorinej ocheredi
     deque <int> intDeque;
    //vstavka v konec
    intDeque.push_back(13);
    intDeque.push_back(12);
    intDeque.push_back(11);



     //vstavka v nachalo
     intDeque.push_front(6);
     intDeque.push_front(7);
     intDeque.push_front(8);




     cout<<"soderzhimoje masiva ";
     cout<< "v nachalo i konec"<<endl;

     //vivid soderzhimogo na ekran


     for(int cout =0;cout<intDeque.size();++cout)
     {
        cout<<"element["<<cout<<"]=";
        cout<<intDeque[cout]<<endl;
     }

     cout<<endl;
     
     //izvlechenije elementa iz nachala

     intDeque.pop_front();

     //izvlechenije elemnta iz konca
     intDeque.push_back();

     cout<<"sodezhimoje posle udalenija elementov ";
     cout<<"iz nachala i iz konca:"<<endl;

     //otobrazhenije soderzhimogo s pomoshju iteratorov
     // stroka dlja starix kompiljatorov deque <int>::iterator element;

     for(auto element = intDeque.begin();element != intDeque.end();++element)
     {
        size_t offset = distance(intDeque.begin(),element);
        cout<<"element["<<offset<<"]="<<*element<<endl;
     } 



     



    return 0;
}
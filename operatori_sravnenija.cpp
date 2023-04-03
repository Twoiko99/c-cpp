#include <iostream>

using namespace std;


class Date
{
    private:
      int day,month,year;

   public:
       Date(int MyDay,int MyMoth,int MyYear):month(MyMoth),day(MyDay),year(MyYear){}
       
       bool operator==(const Date& compareTo)
       {
        return ((day==compareTo.day)&&(month==compareTo.month)&&(year==compareTo.year));
       }
       bool operator!=(const Date& compareTo)
       {
        return !(this->operator==(compareTo));
       }

       void Dispaly_date()
       {
        cout<<day<<"."<<month<<"."<<year<<endl;

       }
       
};

int main()
 {
    Date dr1(6,4,2023);
    Date dr2(8,3,2023);
    if(dr1==dr2)
    {
        cout<<"odinakovije dati"<<endl;
    }
    else
    {
        cout<<"raznije dati"<<endl;
    }

    if(dr1!=dr2)
    {
        cout<<"raznije dati"<<endl;
    }
    else
    {
        cout<<"odinakovije dati"<<endl;
    }
    
    return 0;
 }      


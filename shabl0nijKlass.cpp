#include<iostream>
using namespace std;
//shablon s parametrami po umochaniju
template <typename T1=int,typename T2=double>
class HoldsPair
{ 
    private:
      T1 value1;
      T2 value2;


    public:
      HoldsPair(const T1& val1,const T2& val2):value1(val1),value2(val2) {}//constr
      

      const T1 & GetFirstValue() const
      {
        return value1;
      }
      const T2 & GetSecondValue() const
      {
        return value2;
      }

};

int main()
{
    HoldsPair<> pairIntDbl(300,10.1315);
    HoldsPair<short,const char*>pairShornSrt(25,"shtring");

    cout<<"pervij objekt:"<<endl;
    cout<<"value1: "<<pairIntDbl.GetFirstValue()<<endl;
    cout<<"value2: "<<pairIntDbl.GetSecondValue()<<endl;

    cout<<"vtoroi objekt: "<<endl;
    cout<<"value1: "<<pairShornSrt.GetFirstValue()<<endl;
    cout<<"value2: "<<pairShornSrt.GetSecondValue()<<endl;
    return 0;

}
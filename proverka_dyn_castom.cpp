#include <iostream>
using namespace std;


class Fish
{
    public:
       virtual void Svim()
      {
        cout<<"riba plavaet v vode"<<endl;
      }
      //bazovij klass dolzhen imetj virtualnij dekonstruktor
      virtual ~Fish(){}
};

class Tuna:public Fish
{
    public:
      void Svim()
      {
        cout<<"tunec bistroplavajet"<<endl;
      }

      void BecomeDinner()
      {
        cout<<"tunec na uzhin"<<endl;
      }

};

class Carp:public Fish
{ public:
     void Svim()
     {
         cout<<"karp plavajet"<<endl;

     }
     void Talk()
     {
        cout<<"karp razgovarivajet"<<endl;
     }


};


void DetectFishType(Fish* objFish)
{
    Tuna* objTuna = dynamic_cast <Tuna*>(objFish);
    if(objTuna)//proverka uspeshnisti provedenija
    {
        cout<<"eto tunec"<<endl;
        objTuna->BecomeDinner();
    }

    Carp* objCarp = dynamic_cast <Carp*>(objFish);
    if(objCarp)
    {
        cout<<"obnaruzhen carp"<<endl;
        objCarp->Talk();
    }

    cout<<"proverka vizovom Fish::Swim: "<<endl;
    objFish->Svim();

}



int main()
{
    Carp Anton;
    Tuna Artur;
    DetectFishType(&Anton);
    cout<<endl;
    DetectFishType(&Artur);

    return 0 ;

}
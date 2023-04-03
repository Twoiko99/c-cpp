#include<iostream>
#include<set>
#include<string>


using namespace std;
 template <typename T>
 void DisplayContents(const T& container)
 {
    for(auto iElement = container.cbegin();iElement != container.cend(),++iElement)
    {
        cout<<*iElement<<endl;

    }
    cout<<endl;
 }

 struct ContactItem
 { string name;
   string phoneNumber;
   string displayAs;
   ContactItem(const string& nameInit,const string& phone)
   {
    name =nameInit;
    phoneNumber = phone
    displayAs = (name + ": "+phoneNumber);

   }
   //ispolzuetsa v set::find() dlja poiska

   bool operator ==(const ContactItem& itemToCompare) const
   {
    return (itemToCompare.name == this->name);

   }
   //ispoljzuetsa dlja sortirovki
   
   bool operator <(const ContactItem& itemToCompare)const
   {
    return(this->name<itemToCompare);
   }


   operator const char*()const
   {
    return displayAs.c_str();
   }

 };

 int main()
 {
    set<ContactItem> setCs;
    setCs.insert(ContactItem("Artur Draka","+37129430881"));
    setCs.insert(ContactItem("Andrei Draka","+37129490181"));
    setCs.insert(ContactItem("Olga Draka","37126197939"));
    DisplayContent(setCs);
    cout<<"vvedite imjo dlja udalenija";
    string inputName;
    getline(cin,inputName);
    auto contactFound = setCs.find(ContactItem(inputName,""));
    if(contactFound != setCs.end())

    {
        setCs.erase(contactFound);
        cout<<"posle udalenija"<<inputName<endl;
        DisplayContent(setCs);

    }


    else
    {
        cout<<"kontakt ne naiden"<<endl;

    }


    

    return 0;
 }
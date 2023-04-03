#include<iostream>
#include<string>
using namespace std;

#define SQUARE(x)((x)*(x))
#define PI 3.1415
#define AREA_CIRCLE(r) (PI*(r)*(r))
#define MAX(a,b) (( (a)>(b)) ? (a):(b) )
#define MIN(a,b) (((a)<(b)) ?(a):(b) )

int main()
{cout<<"vvedite chislo: ";
  int num;
  cin>>num;
  cout<<"SQUARE("<<num<<") ="<<SQUARE(num)<<endl;
  cout<<"ploshjadj kruga s radiusom "<<num<<" rovna=";
  cout<<AREA_CIRCLE(num)<<endl;

  cout<<"vvedite drugoje chislo ";
  int num2;
  cin>>num2;
  cout<<MIN(num,num2)<<" menshee chislo"<<endl;
  cout<<MAX(num,num2)<<" boljshee chislo"<<endl;



    return 0;
}

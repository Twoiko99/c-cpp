#include<iostream>
#include<string>
using namespace std;


#define ARRAY_LENGTH 25
#define PI 3.1415
#define MY_DOUBLE double
#define FAV_JUCE "apple"

int main()
{int num[ARRAY_LENGTH]={0};
  cout<<"dlinna massiva:"<<sizeof(num)/sizeof(int)<<endl;
  cout<<"vvediteradius: ";
  MY_DOUBLE radius = 0;
  cin>> radius;
  cout<<"ploshadj: "<<PI*radius*radius<<endl;
  string juce (FAV_JUCE);
  cout<<"i love "<<juce<<" juce"<<endl;




    return 0;
}

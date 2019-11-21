#include <iostream>
using namespace std;

int main()
{
   int a1,b1,a2,b2;
   int x1,y1,x2,y2;
   int S1,S2;
   cout <<"dimensions of the sides of the first rectangle and Coordinates:";
   cin>>a1>>b1>>x1>>y1;
   cout <<"dimensions of the sides of the second rectangle and coordinates:";
cin>>a2>>b2>>x2>>y2;
if (a1*b1>a2*b2)cout<<"the coordinates of the second rectangle:("<<x2<<" "<<y2<<")"<<" ("<<x2+a2<<" "<<y2+b2<<")";
   else cout<<"the coordinates of the first rectangle:("<<x1<<" "<<y1<<")"<<" ("<<x1+a1<<" "<<y1+b1<<")";
    return 0;
}

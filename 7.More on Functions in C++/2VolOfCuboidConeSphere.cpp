#include<iostream>
#include<cmath>
using namespace std;
float volume(float,float,float);
float volume(float,float);
float volume(float);
int main() {
float l,b,h,r;
cout<<"Enter the length, breadth and height of cuboid: "<<endl;
cin>>l>>b>>h;
cout<<"Volume of cuboid is: "<<volume(l,b,h)<<" cubic units"<<endl;
cout<<"Enter radius and height of the cone: "<<endl;
cin>>r>>h;
cout<<"Volume of cone is: "<<volume(r,h)<<" cubic units"<<endl;
cout<<"Enter radius of the sphere: ";
cin>>r;
cout<<"Volume of sphere is: "<<volume(r)<<" cubic units";
return 0;
}
float volume(float l,float b,float h)
{
    return l*b*h;
}
float volume(float r,float h)
{
    return ((M_PI*r*r*h)/3);
}
float volume(float r)
{
    return (4*M_PI*r*r*r)/3;
}
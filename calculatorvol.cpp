#include<iostream>
#include<string>
using namespace std;
 
int main(){

/*This is a volume calculator program*/
//this program is based upon if,else if,string and operations


            int l,b,h,r,R,a,c,d,e,f,g,k,i,j;
            string fig;
            double pi=3.14159265359;
            double x=0.66666667;
            double y=1.33333333;
            double z=0.33333333;

    cout<<"Enter the name of figure: ";
    cin>>fig;
if(fig=="cube")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"length: ";
    cin>>l;
    a=l*l*l;
    cout<<"The volume of "<<fig<<" is "<<a;
}

else if(fig=="cuboid")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"length: ";
    cin>>l;
    cout<<"bredth: ";
    cin>>b;
    cout<<"height: ";
    cin>>h;
    c=l*b*h;
    cout<<"The volume of "<<fig<<" is "<<c;
}

else if(fig=="cylinder")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"height: ";
    cin>>h;  
    cout<<"radius: ";
    cin>>r;
    d=pi*r*r*h;
    cout<<"The volume of "<<fig<<" is "<<d;
}

else if(fig=="cone")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"height: ";
    cin>>h;  
    cout<<"radius: ";
    cin>>r;
    e=pi*z*r*r*h;
    cout<<"The volume of "<<fig<<" is "<<e;
}

else if(fig=="sphere")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"radius: ";
    cin>>r;
    f=pi*r*r*r*y;
    cout<<"The volume of "<<fig<<" is "<<f;
}

else if(fig=="hemisphere")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"radius: ";
    cin>>r;
    g=x*pi*r*r*r;
    cout<<"THhe volume of "<<fig<<" is "<<g;
}

else if(fig=="frustum")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"smaller radius: ";
    cin>>r;
    cout<<"larger radius: ";
    cin>>R;
    cout<<"height: ";
    cin>>h;
    k=z*pi*h*((r*r)+(R*R)+(r*R));
    cout<<"The volume of "<<fig<<" is "<<k;
}

else if(fig=="pyramid")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"base length: ";
    cin>>l;
    cout<<"base bredth: ";
    cin>>b;
    cout<<"height: ";
    cin>>h;
    i=z*l*b*h;
    cout<<"The volume of "<<fig<<" is "<<i;
}

else if(fig=="prism")
{
    cout<<"Enter the dimension of figure"<<endl;
    cout<<"base length: ";
    cin>>l;
    cout<<"base bredth: ";
    cin>>b;
    cout<<"height: ";
    cin>>h;
    j=z*l*b*h;
    cout<<"The volume of "<<fig<<" is "<<j;

}

cout<<"\n\nThe calculation code executed succesfully!";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x - 2*x -5;
}
void bisection()
{//BIsection Method
cout<<"Bisection Method"<<endl;
    double a,b;
    Arman:
    cout<<"Let take 2 points to check:";
    cin>>a>>b;
    if((f(a)>0 and f(b)>0) or (f(a)<0 and f(b)<0))
    {
        cout<<"Error, take another point\n";
        goto Arman;
    }
    int i;
    cout<<"How much you want to search root: ";
    cin>>i;
    int c=0;
    while(i--)
    {

        double x=(a+b)/(double)2;
        cout<<"x"<<c<<" = "<<x<<endl;
        c++;
        if(f(x)>0)
        {
            if(f(a)>0)
                a=x;
            else
                b=x;
        }
        else
        {
            if(f(a)<0)
                a=x;
            else
                b=x;
        }
        
    }}
void False_Position()
{
    cout<<"False Position Method"<<endl;
    //Method of False Position
    double a,b;
    Arman:
    cout<<"Let take 2 points to check:";
    cin>>a>>b;
    if((f(a)>0 and f(b)>0) or (f(a)<0 and f(b)<0))
    {
        cout<<"Error, take another point\n";
        goto Arman;
    }
    int i;
    cout<<"How much you want to search root: ";
    cin>>i;
    int c=0;
    while(i--)
    {

        double x=(a*f(b) - b*f(a))/(f(b)-f(a));
        cout<<"x"<<c<<" = "<<x<<endl;
        c++;
        if(f(x)>0)
        {
            if(f(a)>0)
                a=x;
            else
                b=x;
        }
        else
        {
            if(f(a)<0)
                a=x;
            else
                b=x;
        }
        
    }
    
}
void Secant()
{
    cout<<"Secant Method\n";
    //Secant Method
    double a,b;
    cout<<"Let take 2 points to check:";
    cin>>a>>b;
    vector<double>x;
    x.push_back(a);
    x.push_back(b);
    int i;
    cout<<"How much you want to search root: ";
    cin>>i;
    int c=1;
    int j=1;
    while(i--)
    {
        double d=(x[j-1]*f(x[j])-x[j]*f(x[j-1]))/(f(x[j])-f(x[j-1]));
        x.push_back(d);
        cout<<"x"<<j<<" = "<<x[j+1]<<" f(x"<<j<<") = "<<f(x[j+1])<<endl;
        j++;
    }
}
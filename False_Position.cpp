#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x - 2*x -5;
}
int main()
{
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
    
    
    return 0;
}
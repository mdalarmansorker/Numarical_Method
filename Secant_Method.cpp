#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x*x - 2*x -5;
}
int main()
{
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
    
    
    return 0;
}
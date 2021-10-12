#include<bits/stdc++.h>
using namespace std;
double f(double x, double y)
{
    return 3*x*x + 1;
}
int main()
{
    double x0, y0;
    cout<<"Initial value: x0 = ";
    cin>>x0;
    cout<<"Initial value: y0 = ";
    cin>>y0;
    double h;
    cout<<"h = ";
    cin>>h;
    cout<<"y(x) = ? where x = ";
    int x;
    cin>>x;
    double x1,y1;
    int c=0;
    while(x0 < x)
    {
        y0 = y0 + h*f(x0,y0);
        x0 = x0 + h;
        c++;
    }
    cout<<"y"<<c<<" = "<<y0<<endl;
    return 0;
}
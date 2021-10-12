#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return x*x-3*x+2;
}
double f1(double x)
{
    return 2*x-3;
}
int main()
{
    double tolerance, x0;
    cout<<"x0 = ";
    cin>>x0;
    cout<<"Tolerance = ";
    cin>>tolerance;
    int c=0;
    double x1;
    while(true)
    {
        c++;
        x1 = x0 - (f(x0)/f1(x0));
        if(abs((x1-x0)/x1) >= tolerance)
            x0 = x1;
        else
        {
            break;
        }

    }
    cout<<"x"<<c<<" = "<<x1<<endl;
    

    return 0;
}
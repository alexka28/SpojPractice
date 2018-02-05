#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdio.h>
//QUADAREA - Maximal Quadrilateral Area
//Brahmagupta's formula
using namespace std;
double area(double a,double b,double c,double d)
{
    double s = (a+b+c+d)/2;
    double k;
    k = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    return k;

}
int main()
{
    int t,i=0;
    double a,b,c,d;
    cin>>t;

    while(i != t)
    {
        cin >>a>>b>>c>>d;
        cout <<setprecision(2)<<fixed<< area(a,b,c,d)<<endl;
        ++i;
    }
    return 0;
}

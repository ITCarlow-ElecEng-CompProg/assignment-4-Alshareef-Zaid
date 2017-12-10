/**
Zaid H Alshareef
C00210415
25/09/2017
4.Electrical Resistance of a Wire
*/

#include <iostream>
#include<math.h>
using namespace std;



    double resistance(double r,double l,double p)
    {
    /**equations*/
    double resistance,A;
    A=M_PI*pow(r,2);
    resistance=p*(1/A);
    cout.precision(2);
    return resistance;
    }

    /** Main function**/
    int main()
{
    /**Variable declaration*/
    double r,l,p, result;

    cout << "Electrical Resistance of a Wire\n" << endl;

    do
    {
    /**enter values for radius*/
    cout << "Please Enter the radius of the Wire in m:";
    cin >>r;
    }
    while (r<=0);

    do
    {
    /**enter values for length*/
    cout << "Please Enter the length of the Wire in m:";
    cin >>l;
    }
    while (l<=0);

    do
    {
    /**enter values for resistivity*/
    cout << "Please Enter the resistivity of the Wire in Ohm's.m:";
    cin >> p;
    }
    while (p<=0);

    /**equation*/
    result=resistance(r,l,p);

    /**Display the result*/
    cout << "The electrical resistance of wire entered is: "<< result<< endl;
    cout << "\nconditions:" <<endl;
    cout << "Radius is:" << r <<"m"<<endl;
    cout << "Length is:" << l <<"m" <<endl;
    cout << "resistivity is:" << p << "Ohm.m"<< endl;


return 0;
}

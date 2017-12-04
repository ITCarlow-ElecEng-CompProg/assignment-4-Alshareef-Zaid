/**
Zaid H Alshareef
C00210415
25/09/2017
2.Factorial Calculator
*/


#include<iostream>


using namespace std;


    /**Main function*/
    int main()
{
    /**Variable declaration*/
    int num, factorial=1, n;

    cout <<"Factorial Calculator\n" << endl;

    /**the number should be greater than or equal to 0*/
    cout<<"Enter an integer number:";
    cin>>num;

    /**(note that 0!=1)*/
    for (n=1; n<=num ;n++)
    {

    /**formula*/
    factorial=factorial*n;
    }

    /** Calculate and display result*/
    cout<<"The factorial is = "<<factorial<<endl;

    return 0;
}

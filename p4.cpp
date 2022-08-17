#include<bits/stdc++.h>

using namespace std;

int main()
{
    double population, gos, Au, C, t, lam, A, U, Cell, Sa, Sb, Sc;
    population = 2000000.00;
    gos = 0.02;
    lam = 2.00;
    t  = 3.00;
    Au =  lam*(t/60.00);

    // System A
    cout<<"System A"<<endl;
    Cell = 394;
    C = 19;
    A = 12;                                                                 // Arlang B table
    U = floor(A/Au);
    Sa = (U*Cell);
    cout<<"The total Number of users per cell = "<<U<<" users"<<endl;
    cout<<"The total number of subscribers in system A = "<<Sa<<endl;

    // System B
    cout<<"System B"<<endl;
    Cell = 98;
    C = 57;
    A = 45;                                                                 // Arlang B table
    U = floor(A/Au);
    Sb = (U*Cell);
    cout<<"The total Number of users per cell = "<<U<<" users"<<endl;
    cout<<"The total number of subscribers in system B= "<<Sb<<endl;

    // System C
    cout<<"System C"<<endl;
    Cell = 49;
    C = 100;
    A = 88;                                                                 // Arlang B table
    U = floor(A/Au);
    Sc = (U*Cell);
    cout<<"The total Number of users per cell = "<<U<<" users"<<endl;
    cout<<"The total number of subscribers in system C = "<<Sc<<endl;

    cout<<endl<<"Total cellular subscribers of three systems = "<<Sa+Sb+Sc<<endl;

    cout<<endl<<"Percentage of penetration:"<<endl;
    cout<<"In system A, the percentage of market penetration = "<<Sa*100/population<<endl;
    cout<<"In system B, the percentage of market penetration = "<<Sb*100/population<<endl;
    cout<<"In system C, the percentage of market penetration = "<<Sc*100/population<<endl;
     cout<<"The percentage market penetration of the three system combined  = "<<(Sa+Sb+Sc)*100/population<<endl;

    return 0;
}

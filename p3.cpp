#include<bits/stdc++.h>
using namespace std;

int main()
{
    double gos, Au, Aa, Ab, Ac, Ad, Ae, U;
    gos =  0.005;
    Au = 0.1;
    Aa = 0.005;
    Ab = 1.13;
    Ac = 3.96;
    Ad = 11.1;
    Ae = 80.9;

    cout<<"(a) The total number of users, U = "<<floor((Aa/Au)+1)<<" users"<<endl;
    cout<<"(b) The total number of users, U = "<<floor(Ab/Au)<<" users"<<endl;
    cout<<"(c) The total number of users, U = "<<floor(Ac/Au)<<" users"<<endl;
    cout<<"(d) The total number of users, U = "<<floor(Ad/Au)<<" users"<<endl;
    cout<<"(e) The total number of users, U = "<<floor(Ae/Au)<<" users"<<endl;
    return 0;
}

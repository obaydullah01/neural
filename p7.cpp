#include<bits/stdc++.h>

using namespace std;

int main()
{
    double tow_n1 = 150/1000000.00;
    double tow_n2 = 4/1000000.00;
    double tow_n3 = 500/1000000000.00;
    int N = 70;

    cout<<"(a) "<<endl;
    cout<<"del_tow = "<< (tow_n1/N)<<"sec"<<endl;

    cout<<endl<<endl;
    cout<<"(b) "<<endl;
    cout<<"SIRCIM Bandwidth = "<<(2 /(tow_n1/N))<<endl;
    cout<<"Microcellular Bandwidth = "<<(2 /(tow_n2/N))<<endl;

    cout<<endl<<endl;
    cout<<"(c) "<<endl;
    cout<<"del_tow  = "<<(tow_n3/N)<<endl;
    cout<<"Indoor Bandwidth = "<<(2 /(tow_n3/N))<<endl;




    return 0;
}

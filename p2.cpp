#include<bits/stdc++.h>

using namespace std;

int main()
{
    int sir_given = 15;
    int a_n = 4;
    int b_n = 3;

    int N[] = {7,12};

    cout<<"(a) n = 4"<<endl;
    for(int i = 0; i< (sizeof(N) - sizeof(N[0])); i++){
        double fr_reuse_factor  = sqrt(3.00 * N[i]);
        double sir_calculated = 10*log10(pow(fr_reuse_factor,a_n)/6.00);

        if( sir_calculated >= sir_given){
            cout<<"SIR : "<<sir_calculated<<endl;
            cout<<"Frequency reuse factor :"<<fr_reuse_factor<<endl<<"Cluster size: "<<N[i]<<endl;
            break;
        }

        else
            cout<<"N = "<<N[i]<<" is not possible, assume another cluster size"<<endl;
    }

    cout<<endl<<endl;
    cout<<"(b) n = 3"<<endl;
    for(int i = 0; i< (sizeof(N) - sizeof(N[0])); i++){
        double fr_reuse_factor  = sqrt(3.00 * N[i]);
        double sir_calculated = 10*log10(pow(fr_reuse_factor,b_n)/6.00);

        if( sir_calculated >= sir_given){
            cout<<"SIR : "<<sir_calculated<<endl;
            cout<<"Frequency reuse factor :"<<fr_reuse_factor<<endl<<"Cluster size: "<<N[i]<<endl;
            break;
        }

        else
            cout<<"N = "<<N[i]<<" is not possible, assume another cluster size"<<endl<<endl;

    }

    return 0;
}

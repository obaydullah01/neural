#include<bits/stdc++.h>

using namespace std;

void Channel_Alocation(double N, int chann, int *cell , int *channnel )
{
    double temp_voice = chann / N;
    int temp_voice_int = temp_voice ;
    temp_voice = temp_voice - temp_voice_int;
    double voice_channel = temp_voice * N ;

    *cell = voice_channel;
    *channnel = temp_voice_int;

}


int main()
{
    int total_bw = 30000000;
    int simplex_ch_bw = 25000;
    int control_bw = 1000000;

    cout<<"Total available channels is : "<<(total_bw / simplex_ch_bw / 2)<<endl;
    int total_voice_channel  = (total_bw - control_bw) / (simplex_ch_bw * 2);
    int total_control_channel = (control_bw) / (simplex_ch_bw * 2);
    int cell;

    //N= 4
    double N = 4;
    int voice_channel = total_voice_channel/N;
    int control_channel = (control_bw / simplex_ch_bw/ 2) / N;
    cout<<"(a) For N = 4"<<endl<<voice_channel<<" voice channels and "<<control_channel<<" control channels per cell"<<endl;


    // N = 7
    cout<<endl<<endl;
    N = 7.00;
    cout<<"(b) For N = 7"<<endl;

    Channel_Alocation(N,total_voice_channel, & cell, &voice_channel);
    cout<<voice_channel+1<<" voice channels in "<<cell<<" cells and "<<endl;
    cout<<voice_channel<<" voice channels in "<<N-cell<<" cells "<<endl;

    Channel_Alocation(N,total_control_channel, & cell, &voice_channel);
    cout<<voice_channel+1<<" control channels in "<<cell<<" cells and "<<endl;
    cout<<voice_channel<<" control channels in "<<N-cell<<" cells "<<endl;


    // N = 12
    cout<<endl<<endl;
    N = 12.00;
    cout<<"(b) For N = 12"<<endl;

    Channel_Alocation(N,total_voice_channel, & cell, &voice_channel);
    cout<<voice_channel+1<<" voice channels in "<<cell<<" cells and "<<endl;
    cout<<voice_channel<<" voice channels in "<<N-cell<<" cells "<<endl;

    Channel_Alocation(N,total_control_channel, & cell, &voice_channel);
    cout<<voice_channel+1<<" control channels in "<<cell<<" cells and "<<endl;
    cout<<voice_channel<<" control channels in "<<N-cell<<" cells "<<endl;

    return 0;
}


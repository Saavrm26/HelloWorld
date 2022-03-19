#include <bits/stdc++.h>
// #include<windows.h>
#include<unistd.h>
#include <chrono>
#include <thread>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
using namespace std;
void rand_bs(string to_print,int indx,int chr){
    if(indx!=to_print.size()){
        if((!(0<=chr&&chr<=31))&&chr!=127){
            auto str=to_print;
            for(ll i=0;i<1000*1ll;i++){
                chr++;
                chr=chr%255;
                for(ll j=indx;j<to_print.size();j++){
                    if(((0<=int(str[j]+(char)chr))%255&& (int(str[j]+(char)chr))%255<=31)|| (int(str[j]+(char)chr))%255==127)
                        continue;
                    else
                        str[j]+= char(chr);
                }
                cout<<str;
                // std::this_thread::sleep_for(std::chrono::milliseconds(50));
                cout.flush();
                system("clear");   //replace with cls in windows
            }
            ++indx;
        }
        cout.flush();
    }
    else{
        cout<<to_print;
        return;
    }
    // sleep(1);
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
    rand_bs("hello world",indx,++chr);
}
int main(){
    rand_bs("hello world",0,0);
    cout<<"\n";
}
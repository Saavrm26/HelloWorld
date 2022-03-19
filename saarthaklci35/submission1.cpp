#include <bits/stdc++.h>
#include<windows.h>
#include<unistd.h>
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back
using namespace std;
void rand_bs(string to_print,int indx,int chr){
    if((!(0<=chr&&chr<=31))&&chr!=127){
        cout<<char(chr);
        cout.flush();
        long long flag=0;
        if(char(chr)==to_print[indx]){
            indx++;
            flag=1;
            if(char(chr)=='d')
                return;
            chr=-1;
        }
        if(flag==0){
            cout<<"\b";
            
        }
        sleep(5);
    }
    cout.flush();
    rand_bs("hello world",indx,++chr);
}
int main(){
    cout<<"tHis wiLL take fIvE sEconDs 2 pRinnT eVeryY cHaRacTer . YOu cAn rEmooVe ThE sLeEep fuNCtiOon to mAke iT fAstr oR inCrEsE tHee TiM eVn mORe"<<endl;
    rand_bs("hello world",0,0);
}
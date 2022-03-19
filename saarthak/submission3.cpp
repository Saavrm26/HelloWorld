#include <bits/stdc++.h>
#include<unistd.h>
#include <chrono>
#include <thread>
using namespace std;
//datatype snippets
#define ll long long
//vector snippets
#define vi vector<int>
#define vll vector<long long>
#define eb emplace_back

string space="";
void printvec(vector<char> vec){
    
    for(auto i:vec){
        cout<<i;
        space+=" ";
    }
    space+=" ";
    cout.flush();
    cout<<endl;
    sleep(1);
}
int main(){
    system("clear");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s="hello world";
    vector<char> hlo_wrld(s.begin(),s.end());
    printvec(hlo_wrld);
    vector<vector<char>> grid;
    
    for(int i=0;i<s.size();i++){
        rotate(hlo_wrld.begin(),hlo_wrld.begin()+1,hlo_wrld.end());
        grid.push_back(hlo_wrld);
        cout<<space;
        printvec(hlo_wrld);
    }
    sleep(1);
    system("clear");
    for(int i=0;i<s.size();i++){
        for(int j=0;j<hlo_wrld.size();j++){
            cout<<grid[j][i]<<" ";
            std::this_thread::sleep_for(std::chrono::milliseconds(150));
            cout.flush();
        }
        cout<<endl;
        cout.flush();
        sleep(1);
    }
    for(int i=0;i<s.size();i++){
        for(int j=hlo_wrld.size()-1;j>=0;j--){
            cout<<grid[j][i]<<" ";
            std::this_thread::sleep_for(std::chrono::milliseconds(150));
            cout.flush();
        }
        cout<<endl;
        cout.flush();
        sleep(1);
    }
    system("clear");
    sleep(1);
    string formatter="",str=s;
    int ctr=1;
    for(int i=0;i<s.size()+6;i++){
        system("clear");
        cout<<formatter;
        if(i>5){
            if(s.size()-ctr>=0){
                str=str.substr(0,s.size()-ctr);
                ctr++;
            }
            else{
                str="";
            }
        }
        for(int j=0;j<s.size();j++){
            cout<<"\t"<<str[j]<<"\t"<<str[j]<<"\t"<<str[j]<<"\t"<<str[j]<<endl;
            if(i==0){
                cout.flush();
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
            }
        }
        formatter+="\n";
        cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
    system("clear");
}
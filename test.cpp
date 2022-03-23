//
// Created by Rakan on 2022/3/19.
//

#include <iostream>
#include <string>
using namespace std;
string n2s(int n)
{
    string st,s;
    while(n){
        st+=n%10+'0';
        n/=10;
    }

    return st;
}
bool judge(string s)
{
    for(auto i:s)
    {
        if(i=='2'||i=='0'||i=='1'||i=='9')
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    cout<<judge("23333");
    return 0;
}
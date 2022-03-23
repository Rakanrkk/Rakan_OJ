//
// Created by Rakan on 2022/3/19.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
long long sum;
string n2s(int n)
{
    string s;
    while(n){
        s+=n%10+'0';
        n/=10;
    }
    reverse(s.begin(),s.end());
    return s;
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
    for (int i = 0; i <= 2019; ++i) {
        if(judge(n2s(i))) sum+=i*i;
    }
    cout<<sum;
    return 0;
}
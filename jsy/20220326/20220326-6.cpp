//
// Created by Rakan on 2022/3/26.
//

#include <iostream>
#include <cstring>
#include <vector>
#include <functional>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdlib>
#include <ctime>
#include <string>
#include <map>
#include <iomanip>
#include <set>
#include <deque>
using namespace std;
#define ifor(i, a, b) for ( int i = (a); i < (b); ++i)
#define MEMS(seq, val) memset(seq, val, sizeof(seq));
const int INF = 0x3f3f3f3f;
typedef vector<int> Iv;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    string in,out="";
    cin>>in;
    for (int i = 0; i < in.length(); ++i) {
        if(in[i+1]>='0' && in[i+1]<='9' )
        {
            int n=in[i+1]-'0';
            for(int j=0;j<n;j++)
            {
                out+=in[i];
            }
            i++;
        }else{
            out+=in[i];
        }
    }
    cout<<out;
    return 0;
}

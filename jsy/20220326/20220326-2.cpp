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
    int p=10000;
    int flag=0;
    int tsum=0;
    for(int k=1;k<20;k++)
    {
        while(p)
        {
            p-=k;
            flag+=k;
            tsum+=1;
            if(flag>=100){
                tsum+=k;
                flag-=100;
            }
        }
        cout<<k<<' '<<tsum<<endl;
        p=1000000;
        flag=0;
        tsum=0;
    }

    return 0;
}

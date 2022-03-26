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
bool ifwmpf(LL n)
{
    while(n)
    {
        if( n%10!=1 && n%10!=4 && n%10!=9 )
        {
            return 0;
        }
        n/=10;
    }
    return 1;
}
LL sheet[1001];
int main()
{
    int n=0;
    for(int i=1;n<1000;i++)
    {

    }
    return 0;
}

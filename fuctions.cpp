//
// Created by Rakan on 2022/3/19.
//

#include "fuctions.h"
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


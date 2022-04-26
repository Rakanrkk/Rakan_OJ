//
// Created by 19210134梁化祥 on 2022/4/13.
//

#include <iostream>

using namespace std;
int main()
{
    int bull[7]={0};
    int n;
    cin>>n;
    string name;
    int milk;
    for (int i = 0; i < n; ++i) {
        cin>>name>>milk;
        if (name=="Bessie")
        {
            bull[0]+=milk;
            continue;
        }
        if (name=="Elsie")
        {
            bull[1]+=milk;
            continue;
        }
        if (name=="Daisy")
        {
            bull[2]+=milk;
            continue;
        }
        if (name=="Gertie")
        {
            bull[3]+=milk;
            continue;
        }
        if (name=="Annabelle")
        {
            bull[4]+=milk;
            continue;
        }
        if (name=="Maggie")
        {
            bull[5]+=milk;
            continue;
        }
        if (name=="Henrietta")
        {
            bull[6]+=milk;
            continue;
        }
    }
    int minn=6000000;
    for (int i = 0; i < 7; ++i) {
        if(bull[i]<minn) minn=bull[i];
    }
    int sminn=6000000,cnt=0;
    for (int i = 0; i < 7; ++i) {
        if (bull[i] < sminn && bull[i] != minn) {
            sminn = bull[i];
        }
    }
    if(sminn==6000000)
    {
        cout<<"Tie";
        return 0;
    }
    for (int i = 0; i < 7; ++i) {
        if (bull[i]==sminn) {
            cnt++;
        }
    }
    if(cnt==1)
    {
        for (int i = 0; i < 7; ++i) {
            if (bull[i]==sminn) {
                if (i==0) cout<<"Bessie";
                if (i==1) cout<<"Elsie";
                if (i==2) cout<<"Daisy";
                if (i==3) cout<<"Gertie";
                if (i==4) cout<<"Annabelle";
                if (i==5) cout<<"Maggie";
                if (i==6) cout<<"Henrietta";
            }
        }
    }else{
        cout<<"Tie";
        return 0;
    }
    return 0;
}
//
// Created by Rakan on 2022/4/7.
//

#include <iostream>
#include <string>
using namespace std;
int ans=0;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
//    cout<<s.length()<<endl;
//    cout<<s<<endl;
    for(int i=0;i<s.length();i++)
    {
        int tmp=0,flag=0;
        if(s[i]=='0')
        {

            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]=='1') tmp++;
                if(s[j]=='0')
                {
                    i=j-1;
                    flag=1;
                    break;
                }
            }
            if(flag){
                if(tmp==0) ans+=2;
                if(tmp==1) ans+=1;
            }
        }
    }
    cout<<ans;
}
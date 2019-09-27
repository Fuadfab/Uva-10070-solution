#include<bits/stdc++.h>
using namespace std;
int main()
{
    int mod4,mod100,mod400,mod15,mod55,leap,g=0;
    string str;
    while(cin >>str)
    {
        if(g!=0)
            cout << endl;
        g=1;
        mod4=mod100=mod400=mod15=mod55=leap=0;
        int z=0;
        int l = str.length();
        for(int i=0;i<l;i++)
        {
            mod4=((mod4*10)+(str[i]-'0'))%4;
            mod100=((mod100*10)+(str[i]-'0'))%100;
            mod400=((mod400*10)+(str[i]-'0'))%400;
            mod15=((mod15*10)+(str[i]-'0'))%15;
            mod55=((mod55*10)+(str[i]-'0'))%55;
        }
        if((mod4%4==0) && (mod100%100!=0) || (mod400%400==0))
        {
            cout <<"This is leap year."<<endl;
            z=1;
            leap =1;
        }
        if(mod15%15==0)
        {
            cout <<"This is huluculu festival year."<<endl;
            z=1;
        }
        if(leap=1 && mod55%55==0)
        {
            cout <<"This is bulukulu festival year."<<endl;
            z=1;
        }
        if(z==0)
            cout <<"This is an ordinary year."<< endl;

    }
}

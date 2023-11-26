#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;


int main()
{
    int r=0;
    int a,b,out;
    char ope;
    char c[10]={0};
    while(scanf("%d%c%d=%s",&a,&ope,&b,c)!=EOF)//非常好用
    {
        out=0;
        if(c[0]=='?')continue;
        if(c[0]=='-')
        {
            for(int i=1;i<strlen(c);i++)
            {
               out=10*out-(c[i]-'0');
            }
        }
        else for(int i=0;i<strlen(c);i++)
            {
               out=10*out+(c[i]-'0');
            }
        if(ope=='+'&&a+b==out)r++;
        if(ope=='-'&&a-b==out)r++;
    }
    cout<<r<<'\n';
    return 0;
}

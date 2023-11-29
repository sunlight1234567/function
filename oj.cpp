#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int  read(char c[][500]);

    char c[5][500]={0};
    int l=0,r=0;
    r=read(c);
    for(int i=0;i<r;i++)
    {
        int lenth=strlen(c[i]);
        if(lenth>l)l=lenth;
    }
    for(int i=0;i<l;++i)
    {
        for(int j=r-1;j>=0;--j)
        {
            if(c[j][i]=='\0'||c[j][i]=='\n')cout<<' ';
            else cout<<c[j][i];
        }cout<<'\n';
    }

    return 0;
}
int  read(char c[][500])
{
    int i=0;
    while(cin.getline(c[i],500,'\n'))i++;//关键一步
    return i;
}

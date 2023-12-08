#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char s[]="0123456789";
int main ()
{
    char *fun(int n);
    int n;
    while(cin>>n)
    cout<<fun(n)<<endl;
    return 0;
}
char *fun(int n)
{
    if(n==1)return s;
    else
    {//将前一步的排列移动一步
        static char *s=fun(n-1);//使用第n-1位排列
        int i=0;
        for(int i=1;i<=10;i++)
        {
            if(s[i]!=s[i+1]-1)break;
        }
        //前面i位没有移动
        int j;
        for(j=9;j>=i;j--)//判断到j位交换完成（从左到右一次减小）
        {
            if(s[j]>s[j-1])break;
        }//cout<<"t="<<n<<endl;
        //cout<<s[j]<<"<->"<<s[j-1]<<endl;

        char tem=s[j-1];//交换完成的小尾巴首位跟前一位交换
        s[j-1]=s[j];
        s[j]=tem;
        //随后从小到大排列
        for(int k=j+1;k<9;k++)
        {
            for(int m=k+1;m<10;m++)
            {
                if(s[m]<s[k])
                {
                    //cout<<s[m]<<"<=>"<<s[k]<<endl;
                    char tem=s[k];
                    s[k]=s[m];
                    s[m]=tem;
                }
            }
        }
        return s;
    }
}

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
    {//��ǰһ���������ƶ�һ��
        static char *s=fun(n-1);//ʹ�õ�n-1λ����
        int i=0;
        for(int i=1;i<=10;i++)
        {
            if(s[i]!=s[i+1]-1)break;
        }
        //ǰ��iλû���ƶ�
        int j;
        for(j=9;j>=i;j--)//�жϵ�jλ������ɣ�������һ�μ�С��
        {
            if(s[j]>s[j-1])break;
        }//cout<<"t="<<n<<endl;
        //cout<<s[j]<<"<->"<<s[j-1]<<endl;

        char tem=s[j-1];//������ɵ�Сβ����λ��ǰһλ����
        s[j-1]=s[j];
        s[j]=tem;
        //����С��������
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

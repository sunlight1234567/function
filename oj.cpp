#include<iostream>
#include<iomanip>
#include<cstring>
#include<cmath>
using namespace std;

int count=0;
int m,n;
//��m��Ԫ����ȡ��n��,�����ȫ�����
int main()
{
cin>>m>>n;

void getziji(char *a,int *z,int p);

    char a[m]= {0};
    int z[n+1];
    for(int i=0; i<n; i++)
    {
        z[i]=i;
    }
    z[n]=m;
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)//�����ʼ���
    {
        cout<<a[z[i]];
    }
    cout<<'\n';
    count++;

    getziji(a,z,0);

    return 0;
}

void getziji(char *a,int *z,int p)
{

    if(z[p+1]-z[p]>1&&z[p+1]==m-1-(n-1-p-1))
    {
        z[p]+=1;
        for(int i=p+1; i<n; i++)
        {
            z[i]=z[i-1]+1;
        }
        for(int i=0; i<n; i++)//���һ�����
        {
            cout<<a[z[i]];
        }
        cout<<'\n';
        count++;
        getziji(a,z,0);
    }
    else if(p<n-1)
    {
        getziji(a,z,p+1);
    }
}

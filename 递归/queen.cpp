#include<iostream>
#include<cstring>
using namespace std;

//八皇后问题的实现
//问题：只能求一组解、只能求八皇后
int row[9]={0};
bool queen(int k)
{
    bool judge(int i,int k);

    for(int i=1;i<9;i++)
    {
        if(judge(i,k))
        {
            row[k]=i;
            if(k==8)return true;
            else if(queen(k+1))return true;
        }
    }
    return false;//第k列无可行解
}
bool judge(int i,int k)
{
    for(int j=1;j<k;j++)
    {
        if(row[j]==i||row[j]-i==k-j||row[j]-i==j-k)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    if(queen(1))for(int i=1;i<9;i++)cout<<row[i]<<' '<<'\n';
    return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
struct dp
{
  int cost;
  char ch[2];
};
void cal(int i,int j,dp arr[5001][5001],char ch1,char ch2)
{
    int k;
    int cost1,cost2;
    if(arr[i][j-1].ch[0]==ch1||arr[i][j-1].ch[1]==ch1)
    {
        cost1=arr[i][j-1].cost;
    }
    else
    {
        cost1=arr[i][j-1].cost+1;
    }
    if(arr[i-1][j].ch[0]==ch2||arr[i-1][j].ch[1]==ch2)
    {
        cost2=arr[i-1][j].cost;
    }
    else
    {
        cost2=arr[i-1][j].cost+1;
    }
    if(cost1==cost2)
    {
        arr[i][j].ch[0]=ch1;
        arr[i][j].ch[1]=ch2;
        arr[i][j].cost=cost2;
    }
    else
    {
        if(cost1<cost2)
        {
            arr[i][j].ch[0]=ch1;
            arr[i][j].cost=cost1;
        }
        else
        {
            arr[i][j].ch[0]=ch2;
            arr[i][j].cost=cost2;
        }
    }
}
void cal1(int i,dp arr[5001][5001],char ch1)
{
    if(arr[0][i-1].ch[0]==ch1||arr[0][i-1].ch[1]==ch1)
    {
       arr[0][i].cost=arr[0][i-1].cost;
    }
    else
    {
        arr[0][i].cost=arr[0][i-1].cost+1;
    }
    arr[0][i].ch[0]=ch1;
}
void cal2(int i,dp arr[5001][5001],char ch1)
{
    if(arr[i-1][0].ch[0]==ch1||arr[i-1][0].ch[1]==ch1)
    {
       arr[i][0].cost=arr[i-1][0].cost;
    }
    else
    {
        arr[i][0].cost=arr[i-1][0].cost+1;
    }
    arr[i][0].ch[0]=ch1;
}
int main()
{
    dp arr[5001][5001];
    char str1[5001],str2[5001];
    int t,i,j,k,len1,len2;
    cin>>t;
    while(t-->0)
    {
        char str[10001];
        cin>>len1>>len2;
        for(i=0;i<len1;i++)
            cin>>str1[i];
        for(i=0;i<len2;i++)
            cin>>str2[i];
        for(i=0;i<=len2;i++)
            for(j=0;j<=len1;j++)
            {
                arr[i][j].ch[0]=-1;
                arr[i][j].ch[1]=-1;
            }
        arr[0][0].cost=0;
        for(i=1;i<=len1;i++)
            cal1(i,arr,str1[i-1]);
        for(i=1;i<=len2;i++)
            cal2(i,arr,str2[i-1]);
        for(i=1;i<=len2;i++)
            for(j=1;j<=len1;j++)
                cal(i,j,arr,str1[j-1],str2[i-1]);
        cout<<arr[len2][len1].cost<<endl;
    }
    return 0;
}

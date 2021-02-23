#include<bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int);

int main()
{
    
        int numOfElements;
        cin>>numOfElements;
        vector<long long> ans=printFibb(numOfElements);
        for(long long i:ans)
        {
            cout<<i<<" ";
        }
    
    return 0;
}

vector<long long>printFibb(int n)
{
    vector<long long>ans;
    long long first=1, second=1;
    if(n>=1)
    {
        ans.push_back(first);
    }
    if(n>=2)
    {
        ans.push_back(second);
    }
    for(int i=2;i<n;i++)
    {
        ans.push_back(first+second);
        long long int result=first+second;
        first=second;
        second=result;
    }
    return ans;
}

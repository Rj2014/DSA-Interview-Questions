#include<iostream>
using namespace std;
#include<vector>
int lookup[100];    
void initialize()
{
    for(int i=0;i<100;i++)
    {
        lookup[i]=-1;

    }
}
int  fibo(int n)
{
    if(lookup[n]==-1)
    {
        if(n<=1)
        {
            lookup[n]=n;
        }
    
        else
        {
            lookup[n]=fibo(n-1)+fibo(n-2);
        }
    }
    return lookup[n];

}
int main()
{
    int number=40;
    initialize();
    int result=fibo(number);
    cout<<result; //gives the total value of that fibo number
}

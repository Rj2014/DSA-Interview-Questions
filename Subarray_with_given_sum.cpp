#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    int N,S;
	    cin>>N>>S;
	    int A[N];
	    for(int j=0;j<N;j++)
	        cin>>A[j];
	    int pivot=0,sum=0,flag=0;
	    for(int j=0;j<N;j++)
	    {
	         sum=sum+A[j];
	        while(sum>S)
	        {
	            sum=sum-A[pivot];
	            pivot++;
	        }
	        if(sum==S)
	        {
	            cout<<pivot+1<<" "<<j+1<<"\n";
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	        cout<<"-1"<<"\n";
	}
	return 0;
}

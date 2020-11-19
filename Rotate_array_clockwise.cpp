#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    unsigned int n,d;
	    cin>>n>>d;
	    int a[n];
	    for(unsigned int i=0;i<(n);i++)
	    {
	        cin>>a[(i+n-d)%n];
	        
	    }
	    //for anticlockwise cin>>a[(i+d)%n];
	    for(unsigned int i=0;i<(n);i++)
	    {
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}

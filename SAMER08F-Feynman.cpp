#include <iostream>
using namespace std;

int main() {
	
	while(1)
	{
		
		int t;
		cin>>t;
		if(t==0)
			break;
		else
			cout<<(t*(t+1)*(2*t+1))/6<<endl;
	}

	return 0;
}
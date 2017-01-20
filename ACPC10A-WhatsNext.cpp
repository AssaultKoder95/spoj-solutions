#include <math.h>
#include <iostream>
using namespace std;

int main() {

	long a,b,c,z;
	bool f=false;
	a=b=c=-1;
	while(1)
	{
		cin>>a>>b>>c;
        if(a==0&&b==0)
            return 0;

		if((b-a)==(c-b))
			{z=(b-a)+c;f=true;}
		else
		{
			z=(b/a)*c;f=false;
		}


	if(f==true)
		cout<<"AP "<<z<<endl;
	else
		cout<<"GP "<<z<<endl;
	}
	return 0;
}

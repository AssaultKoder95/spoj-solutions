#include <stdio.h>
int main()
{
	int test,fact = 1,prod[100],ii;

	int temp=0,num[200],n,m,x,other_temp,i,j,k;     //initialization for multiplication....

	num[0] = 1; i = 0;
	//printf("\nENTER NO. OF TEST CASES: ");
	scanf("%d",&test);
	//printf("\nENTER NO.: ");
	for(ii = 0;ii < test; ii++)
		scanf("%d",&prod[ii]);
	ii = 0;
	while(test > 0)
	{
		num[0] = 1; i = 0;
		temp=0;
		for(m = 1;m <= prod[ii]; m++)
		{
			//------------FOR MULTIPLICATION-----------------
			for(j=0;j<=i;j++)
			{
				x = num[j] * m + temp;
				num[j] = x % 10;
				temp = x / 10;
			}
			for(;temp > 0; temp /= 10)
			{
				i++;
				num[i] = temp % 10;
			}
		}

		for(k=i;k>=0;k--)
			printf("%d",num[k]);
		printf("\n");
		test--;
		ii++;
	}
	//printf("\n");
	return 0;
}

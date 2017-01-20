#include<stdio.h>
int reverse(int a);void funct(int,int);
int main()
{
  int test,i,j,a[100];
  scanf("%d",&test);
  while(test--)
  { scanf("%d %d",&i,&j);funct(i,j);
  } return 0;
}
void funct(int a,int b)
{ int no1,no2,result;no1=a;no2=b;
  no1=reverse(no1);
  no2=reverse(no2);
  result=no1+no2;
  result=reverse(result);
  printf("\n%d\n",result);
}

int reverse(int a)
{ int rev=0;
	while(a!=0)
	{ rev=rev*10;
	  rev=rev+a%10;
	  a=a/10;
	}

	return rev;
}


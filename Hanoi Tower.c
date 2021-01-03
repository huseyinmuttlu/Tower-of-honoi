#include<stdio.h>
#include<stdlib.h>
typedef struct TOWER
{
	int n;
	char toh[3];
}tower;
void push(tower [],tower,int *);
tower pop(tower [],int *);
void main()
{
	tower t[100],item,temp;
	int n= 3,top=-1;
	char temp1;
	item.n=n;
	item.toh[0]='A';
	item.toh[1]='B';
	item.toh[2]='C';
	while(1)
	{
		while(1)
		{
			push(t,item,&top);
			item.n=item.n-1;
			if(item.n==0)
				break;
			temp1=item.toh[1];
			item.toh[1]=item.toh[2];
			item.toh[2]=temp1;	
		}
		item=pop(t,&top);
		printf("move disc %d from %c to %c\n",item.n,item.toh[0],item.toh[2]);
		item=pop(t,&top);
		printf("move disc %d from %c to %c\n",item.n,item.toh[0],item.toh[2]);
		temp.n=item.n-1;
		temp.toh[0]=item.toh[1];
		temp.toh[1]=item.toh[0];
		temp.toh[2]=item.toh[2];
		item=temp;
		//push(t,temp,&top);
	}	
}
void push(tower t[],tower item,int *top)
{
	if(*top==99)
	{
		printf("Not enough memory\n");
		exit(0);
	}
		
	++(*top);
	t[*top].n=item.n;
	t[*top].toh[0]=item.toh[0];
	t[*top].toh[1]=item.toh[1];
	t[*top].toh[2]=item.toh[2];
}

tower pop(tower t[],int *top)
{
	if(*top==-1)
		exit(0);
	else
	{
		return t[(*top)--];
	}
}

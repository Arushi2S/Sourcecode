#include<stdio.h>
#define max 10
int stk[max], top=-1;
void push(int x);
int pop();
void dectobin(int n);
void main()
{
	int n;
	printf("\n Decimal No.:");
	scanf("%d",&n);
	dectobin(n);
}
void push(int x)
{
	// Check Overflow	// if not push the element into the stack
	stk[++top]=x;
}
int pop()
{
	// Check Underflow	// if not pop the element from the stack
	return (stk[top--]);
}
void dectobin(int n)
{
	while (n>0)
	{
		push(n%2); n=n/2;
	}
	printf("\n Binary No.: ");
	while (top>=0)
		printf("%d",pop());	
}


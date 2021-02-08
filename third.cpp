#include<bits/stdc++.h>
using namespace std;
int main()
{
int arr[20];
int x=1;
for(int i=0;i<20;i++)
{
	arr[i]=x;
	x++;
}
for(int i=0;i<20;i++)
{
	if(arr[i]%2==0)
	{
		cout<<(i+1)<<" ";
	}
}
}

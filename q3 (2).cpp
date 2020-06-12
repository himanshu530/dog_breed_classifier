#include<iostream>

using namespace std;

int main()
{
	int n,i,j,k,t,count=0;
	cin>>n;
	int arr[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	i=0;j=0;
	int row,col;
	while(i<n-1&&j<n-1)
	{
		for(k=0;k<n;k++)
		{
			int min=arr[i][k];
			row=i;col=k;
			for(t=i+1;t<n;t++)
			{
				if(min>arr[t][k])
				{
					min=arr[t][k];
					row=t;
					col=k;
				}
			}
			if(row!=i)
			{int temp=0;
			temp=arr[row][col];
			arr[row][col]=arr[i][k];
			arr[i][k]=temp;
			count++;}	
		}
		for(k=0;k<n;k++)
		{
			int min=arr[k][j];
			row=k;col=j;
			for(t=j+1;t<n;t++)
			{
				if(min>arr[k][t])
				{
					min=arr[k][t];
					row=k;
					col=t;
				}
			}
			if(col!=j)
			{int temp=0;
			temp=arr[row][col];
			arr[row][col]=arr[k][j];
			arr[k][j]=temp;
			count++;}	
		}
		i++;
		j++;
	}
	cout<<count;
	cout<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
	}
	
}

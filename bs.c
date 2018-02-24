#include<stdio.h>
int bin(int a[],int low,int high,int ele) {
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(ele==a[mid])
		{
			//c=1;
			printf("%d element found at position %d\n",ele,mid+1);
			break;
		}
		else if(ele<a[mid])
			high=mid-1;
			//return bin(a,low,mid-1,ele);
		else
			low=mid+1;
		//	return low;
			//return bin(a,mid+1,high,ele);
	}
if(low>high)
	printf("element not found");
}
void main() {
	int bs,n,i,ele,a[10];int c=0;
	printf("enter the size of array:-");
	scanf("%d",&n);
	//int a[n];
	printf("enter the elements:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("enter the element to search:-");
	scanf("%d",&ele);
	bs=bin(a,0,n-1,ele)+1;
	/*if(c==1)
		printf("%d found at position %d\n",ele,bs);
	else
		printf("element not found\n"); */}

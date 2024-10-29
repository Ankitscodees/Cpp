#include<stdio.h>
int main()
{
	int i,n,j,temp;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter values of array:");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=n;i>0;i--){
		for(j=0;j<i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("Sorted Result:");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

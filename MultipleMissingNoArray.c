#include<stdio.h>
void multipleMissing(int a[],int size){
	int i,l=a[0],h=a[size-1], diff=l;
	for(i=0;i<size;i++){
		if((a[i]-i)!=diff){
			while(diff<(a[i]-i)){
				printf("Missing element is=%d\n",(i+diff));
				diff++;
			}
		}
	}
}
int main(){
	int i,n;
	int a[100];
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	multipleMissing(a,n);
}

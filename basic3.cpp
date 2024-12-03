#include<stdio.h>
int main(){
    int a[]={0,21,31,321,2,21};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
    	int min=i;
    	for(int j=i+1;j<n;j++){
    		if(a[j]<a[min]){
    			min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	printf("mang sau khi duoc xap xep la: ");
    for(int i=0;i<n;i++){
    	printf("%d ", a[i]);
	}
	return 0;
} 

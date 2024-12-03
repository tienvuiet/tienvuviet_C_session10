#include<stdio.h>
int main(){
    int a[]={23,2,32,232,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(a[j]>a[j+1]){
    			int temp=a[j];
    			a[j]=a[j+1];
    			a[j+1]=temp;
			}
		}
	}
	printf("mang sau khi duoc xap xep la: ");
    for(int i=0;i<n;i++){
    	printf("%d ", a[i]);
	}
	int giatri;
	printf("\nnhap vao gia tri muon tim kiem: ");
	scanf("%d",&giatri);
	int start=0;
	int end=n;
	int mid;
	int dem=0; 
	while(start<=end){
		mid=(start+end)/2;
		if(a[mid]==giatri){
			printf("\nphan tu can tim o vi tri %d :",mid+1);
			dem=1;
			break;
		}else if(a[mid]>giatri){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	if(!dem){
	printf("\nkhong tim thay phan tu nay trong mang");}
	return 0;
} 

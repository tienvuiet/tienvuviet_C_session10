#include<stdio.h>
int main(){
	int n;
	int a[n];
	printf("nhap vao so luong phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("mang ban dau la: ");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	int giatri;
	int vitri=-1;
	printf("\nnhap vao gia tri muon tim kiem: ");
	scanf("%d",&giatri);
	for(int i=0;i<n;i++){
		if(a[i]==giatri){
			vitri=i+1;
		}
	}
	if(vitri!=-1){
		printf("phan tu co trong mang va o vi tri: %d",vitri);
	}else{
		printf("phan tu khong ton tai trong mang");
	}
	return 0;
} 

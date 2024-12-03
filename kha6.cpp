#include<stdio.h>
int main() {
    int a[] = {1, 22, 1, 34, 1}; 
    int n = sizeof(a) / sizeof(a[0]); 
    int giatri;
    printf("Nhap vao gia tri can tim: ");
    scanf("%d", &giatri);
    int vitri[n]; 
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] == giatri) {
            vitri[count] = i + 1; 
            count++;
        }
    }
    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", giatri);
        for (int i = 0; i < count; i++) {
            printf("%d ", vitri[i]);
        }
    } else {
        printf("Phan tu %d khong ton tai trong mang", giatri);
    }
    return 0;
}

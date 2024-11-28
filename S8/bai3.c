#include<stdio.h>
int main(){
    int n;
    printf("nhap vao mot so nguyen: ");
    scanf("%d",&n);
    
    int arr[n][n];
    printf("nhap vao cac phan tu cua mang 2 chieu: \n");
    
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
    		printf("phan tu [%d][%d]: ",i,j);
    		scanf("%d",&arr[i][j]);
    		
		}
	}
	printf("mang 2 chieu duoi dang ma tran vuong:\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			printf("%d",arr[i][j]);
		}
	}
	return 0;
}

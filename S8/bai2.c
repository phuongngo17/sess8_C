#include<stdio.h>
int main(){
	int arr[]= {2 ,5, 9, 13, 26, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	
	int element;
	int found = 0 ;
	
	printf("nhap vao phan tu can kiem tra: ");
	scanf("%d",&element);
	
	for(int i = 0; i < n; i++){
		if(arr[i] == element){
			printf("vi tri phan tu trong mang la: %d\n",i);
			found = 1;
			break;
		}
	}
	if (!found){
		printf(" phan tu khong ton tai trong mang.\n");
	}
	return 0;
}

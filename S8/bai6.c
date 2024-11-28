#include<stdio.h>
int main(){
	int arr[3][3] = {
	{
		1, 2, 3,
	},{
		4, 5, 6
	},{
		7, 8, 9
	}
	};
	
	int size = 3;
	int sum = 0;
	printf("cac phan tu tren duong cheo chinh cua ma tran la: \n");
	
	for(int i = 0; i < size; i++){
		printf("%d",arr[i][i]);
		sum = sum + arr[i][i];
	}
	printf("\n");
	printf("tong cac phan tu tren duong cheo chinh la: %d\n",sum);
	return 0;
}

#include<stdio.h>
int main(){
	int arr[3][3] = {
		{1, 3, 5},
		{4, 7, 9},
		{8, 6, 2}
	};
	
	int rows = 3;
	int cols = 3;
	int max = arr[0][0];
	
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			if(arr[i][j] > max){
				max = arr[i][j];
			}
		}
	}
	printf("phan tu lon nhat trong mang la: %d\n",max);
	
	return 0;
}

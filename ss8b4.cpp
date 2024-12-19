#include<stdio.h>
int main(){
	int array[3][3]={{3,6,9},{7,4,1},{22,10,4}};// co the thay doi phan tu 
	int n=sizeof(array)/sizeof(array[0]);
	int max=array[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(array[i][j]>max){
			max=array[i][j];
		}
      } 
   }
	printf("phan tu lon nhat trong mang la: %d\n",max);
	return 0;
}

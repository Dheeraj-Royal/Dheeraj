#include<stdio.h>
int n,i,j,temp;
int main(){

	int arr[n];
	printf("Enter the num of elemnts to the arrray :");
	scanf("%d",&n);
	sort();
	return 0;
}
int sort(){
	int arr[n];
	printf("\nEnter %d elemnts into the arrray :",n);
	for(i =0; i<n ;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements of aray are:\n");
	for(i =0; i<n ;i++){
		printf("%d ",arr[i]);
	}
	printf("\nThe sorted order of elements is :\n");
	for(i=0 ; i<n ; i++){
		for(j=i+1 ; j<n ; j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("[");
	for(i=0 ; i<n ; i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
	return 0;
}

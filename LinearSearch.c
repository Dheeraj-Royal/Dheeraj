#include<stdio.h>
int n,i,j,num,ind=0;
int main(){

	int arr[n];
	printf("Enter the num of students participated :");
	scanf("%d",&n);
	search();
	return 0;
}
int search(){
	int arr[n];
	printf("\nEnter the roll numbers of %d students :",n);
	for(i =0; i<n ;i++){
		scanf("%d",&arr[i]);
	}
	printf("The roll numbers of students are:\n");
	printf("[");
	for(i =0; i<n ;i++){
		printf("%d ",arr[i]);
	}
	printf("]");
	printf("\nEnter the roll number of student to be searched  :\n");
	scanf("%d",&num);
	for(i =0; i<n ;i++){
		if(arr[i]==num){
			ind = i;
		}
	}
	if(ind>0){
		printf("The student with roll.num %d have participated %d in the order ",num,ind+1);
	}
	else{
		printf("The student with roll.num %d have not  participated",num);
	}
	return 0;
}

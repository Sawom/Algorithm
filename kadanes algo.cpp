#include<bits/stdc++.h>
using namespace std;

int maxSumarray(int a[], int size){
        int i;
        int max_sum=a[0];
        int max_ending = 0;

        for(i=0;i<size;i++){
        	max_ending = max_ending + a[i];

        	if(max_ending< 0){
        		max_ending=0;
			}
		    if(max_sum < max_ending){

			  max_sum = max_ending;

			}

		}

return max_sum;
}


int main(){

	int i,size;

	printf("Enter the size of the array ");
	scanf("%d",&size);

	int a[size];
	printf("\n Enter the elements of the array");
	for(i=0; i<size; i++){

		scanf("%d",&a[i]);
	}


	int max_sum = maxSumarray(a,size);

    printf("\n The Maximum Sum of the Sub Array is : %d",max_sum);


	return 0;
}

#include <stdio.h>
#include <stdlib.h>
/*
—°‘Ò≈≈–Ú 
*/
void selectSort(int arr[],int n )
{
	int i = 0,minIndex=0;
	int j,temp;
	 for(i = 0 ; i< n ; i++ ){
 		  minIndex = i;
		 for( j=i+1;j<n;j++){
 		     if(arr[j] < arr[minIndex]){
     		 	minIndex = j;
     		 }	
 		} 
 		if(minIndex != i){
		 	  temp = arr[i];
		 	 arr[i] = arr[minIndex];
		 	 arr[minIndex] = temp;
		 } 
 	}
} 

int main(){
	int arr[] = {10,32,54,665,75,3,5,1,67,13,89};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
    selectSort(arr,len);
    for(;i<len;i++){
    	printf("%d\r\n",arr[i]);
    }
     
}

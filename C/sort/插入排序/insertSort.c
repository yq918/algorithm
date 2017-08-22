#include <stdio.h>
#include <stdio.h>

/**
 ≤Â»Î≈≈–Ú 
*/
void insertSort(int arr[], int n)
{
  int i = 0;
  int e;
  for(i = 1; i < n;i++){
  	  e = arr[i];
  	  int j = 0;
  	 for(j = i; j> 0 && arr[j-1] > e; j--){
 	  	   arr[j] = arr[j-1];
 	  }
	  arr[j] = e;  
  } 
}

int main()
{
	int arr[] = {10,2,4,5,6,34,23,563,234,9};
	int len = sizeof(arr)/sizeof(arr[0]);
	insertSort(arr,len); 
	int i = 0 ;
	for(;i<len;i++){
		printf("%d\n",arr[i]);
	} 
 return 1;	
}

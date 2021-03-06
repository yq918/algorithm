#include <stdio.h>

int __partition(int arr[],int l, int r)
{
	int v = arr[l];
	int j = l;
	int i = 0;
	int temp = 0;
	for(i = l+1;i<=r;i++){
		if(arr[i] < v){
			temp  = arr[j+1]; 
			arr[j+1] = arr[i];
			arr[i] = temp; 
			j++;
		}
	}  
	temp = arr[l];
	arr[l] = arr[j];
	arr[j] = temp;   
	return j;
}


int __partition2(int arr[],int l,int r){
      int v = arr[l];
      int i = l+1; 
	  int j = r;
      int temp = 0;
      while( 1==1 ){
      	  while( i <=r && arr[i] < v) i++;
      	  while( j >= l+1 && arr[j] > v) j--;
      	  if(i >= j) break;
      	  temp = arr[i];
      	  arr[i] = arr[j];
      	  arr[j] = temp;
      	  i++;
      	  j--; 
      }
        temp = arr[l];
        arr[l] = arr[j];
        arr[j] = temp;
       return j;
}



void __quickSort(int arr[],int l,int r)
{
	if(l >= r)
	    return;
	    
	//int p = __partition(arr,l,r);  
	int p = __partition2(arr,l,r); 
	__quickSort(arr,l,p-1);  
	__quickSort(arr,p+1,r); 
}

void quicKSort(int arr[], int n)
{  
	__quickSort(arr,0,n-1); 
} 

int main()
{
	int arr[10] = {10,293,4,56,231,65,89,43,67,2};
	quicKSort(arr,10); 
	int i = 0 ;
	for(i=0;i<10;i++){
	 	printf("%d\n",arr[i]);
	} 
}

#include <iostream> 
#include <string>
#include "../using-helper/Student.h"
#include "../using-helper/SortTestHelper.h"

using namespace std;

template<typename T> 
/*
 �������� 
*/
void insertSort(T arr[], int n )
{
	int i = 1;
	for(i = 1; i < n; i++){
		 int e = arr[i];
		 int j = 0;
		 for(j = i; j > 0 && arr[j-1] > e;j--){
 			arr[j] = arr[j-1];
 		}
 		arr[j] = e;
	} 
} 


int main()
{  
   	int arr[] = {10,2,4,5,6,34,23,563,234,9}; 
  	insertSort(arr,10); 
  	int i  = 0;
  	for( i = 0; i< 10;i++){
	  	 printf("%d\n",arr[i]);
	  } 
	delete[] arr;
	
return 1;	
}

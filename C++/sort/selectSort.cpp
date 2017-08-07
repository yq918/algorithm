/*
C++ 实现选择排序  
*/
#include <iostream> 

//声明当前文件的命名空间
using namespace std;

void selectSort(int arr[],int n){
	 for(int i = 0; i< n; i++){
 		int  minIndex = i;
 		 for(int j = i+1; j < n; j++){
 		 	 if(arr[j] < arr[minIndex])
 	 		 	 minIndex = j; 
 		 }
 		 swap(arr[i] , arr[minIndex] );
 	}
}

int main()
{
	int arr[10] = {10,90,8,75,6,5,4,32,2,13};
	selectSort(arr,10);
	for(int i=0;i<10;i++)
        cout<<arr[i]<<" "; 
    return 0;	 
}

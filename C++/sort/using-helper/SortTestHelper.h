#include <iostream>
#include <ctime>
#include <cassert>

using namespace std;

namespace SortTestHelper{
	int*  generateRandomArray(int n, int rangeL,int rangeR){
		 assert(rangeL <= rangeR );
		 int *arr = new int[n];
		 srand(time(NULL));
		 for(int i =0; i< n ;i++){
 			arr[i] = rand() % (rangeR - rangeL + 1 ) + rangeL;
 		}
		 return arr;
	}
	
	template<typename TT>
	void printArr(TT arr[], int n){
           for(int i =0; i< n;i++){
           	 cout<<arr[i]<<" ";
           }
		   cout<<endl;
		   return ;		
	}
	
	/*
	判断数组是否排序成功 
	*/
	template<typename T>
	bool isSorted(T arr[], int n)
	{
		for(int i = 0; i< n -1 ;i++){
			 if(arr[i] > arr[i+1]){
 				 return false;
 			}
		}
		return true;
	}
	
	
	/*
	 测试函数执行时间  
	*/
	template<typename T>
	void testSort(string SortName,void(*sort)(T[],int),T arr[],int n){
		 clock_t startTime = clock();
		 sort(arr,n);
		 clock_t endTime = clock();		 
         assert(isSorted(arr,n));		 
		 cout<<SortName<<" : " << double(endTime - startTime) / CLOCKS_PER_SEC << " S " <<endl;
		 return ; 
	}
	
	
	
}

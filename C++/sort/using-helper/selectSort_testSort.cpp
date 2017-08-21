/*
C++实现选择排序 并采用helper助手文件的方式   助手新加计算函数运行时间函数 [ testSort ]
*/
#include <iostream>
#include <string>
#include "Student.h"
#include "SortTestHelper.h"

using namespace std;

//这里定义模板函数，  可传入任意类型的参数到  selectSort函数 
template<typename T>

void selectSort(T arr[],int n ){
	for(int i = 0; i< n ;i++){
		 int minIndex = i; 
		 for(int j = i+1;j < n; j++){  
 			 if(arr[j] < arr[minIndex])
 		         minIndex = j;   
 		 }
 		 swap(arr[i],arr[minIndex]); 
	}
} 

int main()
{
   int n = 100000;
   int *arr = SortTestHelper::generateRandomArray(n,0,n); 
   //selectSort(arr,n); 
   //SortTestHelper::printArr(arr,n);   
   
   //获取执行时长  
   SortTestHelper::testSort("selectSort",selectSort,arr,n);
   
   delete[] arr;
   
   return 0;	
}


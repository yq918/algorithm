/*
C++ʵ��ѡ������ ������helper�����ļ��ķ�ʽ   �����¼Ӽ��㺯������ʱ�亯�� [ testSort ]
*/
#include <iostream>
#include <string>
#include "Student.h"
#include "SortTestHelper.h"

using namespace std;

//���ﶨ��ģ�庯����  �ɴ����������͵Ĳ�����  selectSort���� 
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
   
   //��ȡִ��ʱ��  
   SortTestHelper::testSort("selectSort",selectSort,arr,n);
   
   delete[] arr;
   
   return 0;	
}


/*
C++实现选择排序 并采用模板函数的方式 
*/
#include <iostream>
#include <string>
#include "Student.h"

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
	int arr[10] = {10,78,45,67,3,4,5,6,7,93};
	 selectSort(arr,10);
	for(int i = 0 ; i < 10; i++){
		cout<<arr[i]<<" ";
	} 
	
	cout<<"\r\n";
	//传入浮点数 
	float b[5] = {4.4,3.3,2.2,1.1,7.3};
	 selectSort(b,5);
	for(int i = 0 ; i < 5; i++){
		cout<<b[i]<<" ";
	} 
	
 	cout<<"\r\n";
    //传入字符串 
	string str[5] = {"D","E","F","A","W"};
	selectSort(str,5);
	for(int i = 0 ; i < 5; i++){
		cout<<str[i]<<" ";
	}  
	
	cout<<"\r\n";
	//传入结构体，是自定义的类型
	Student strt[4] = { {"D",90},{"B",30},{"A",70},{"F",78}};
 	selectSort(strt,4);
 	for(int i = 0 ; i < 4; i++){
 		cout<<strt[i]<<" ";
 	}   
   return 0;	
}

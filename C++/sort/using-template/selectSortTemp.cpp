/*
C++ʵ��ѡ������ ������ģ�庯���ķ�ʽ 
*/
#include <iostream>
#include <string>
#include "Student.h"

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
	int arr[10] = {10,78,45,67,3,4,5,6,7,93};
	 selectSort(arr,10);
	for(int i = 0 ; i < 10; i++){
		cout<<arr[i]<<" ";
	} 
	
	cout<<"\r\n";
	//���븡���� 
	float b[5] = {4.4,3.3,2.2,1.1,7.3};
	 selectSort(b,5);
	for(int i = 0 ; i < 5; i++){
		cout<<b[i]<<" ";
	} 
	
 	cout<<"\r\n";
    //�����ַ��� 
	string str[5] = {"D","E","F","A","W"};
	selectSort(str,5);
	for(int i = 0 ; i < 5; i++){
		cout<<str[i]<<" ";
	}  
	
	cout<<"\r\n";
	//����ṹ�壬���Զ��������
	Student strt[4] = { {"D",90},{"B",30},{"A",70},{"F",78}};
 	selectSort(strt,4);
 	for(int i = 0 ; i < 4; i++){
 		cout<<strt[i]<<" ";
 	}   
   return 0;	
}
#include <iostream>
#include <math.h>
using namespace std;

int binary_search(int arr[], int val, int left, int right)
{
	while(left<right){
		int mid = (left+right)/2;
		if(arr[mid]>val){
			right = mid -1;
		}
		else if(arr[mid]<val){
			left = mid + 1;
		}
		else{
			return mid;
		}
	}
	if(arr[left]!=val){
		return -1;
	}
	return left;
}
	

int main()
{
	int value,index;
	int arr[] = {1, 4, 5, 7, 9, 10, 15, 18, 20, 22, 24, 25, 27, 29, 30, 32, 34, 35};
	while(value != -1)
	{
		cout<<"Wpisz poszukiwana wartosc (-1 aby wyjsc) \n";
		cin>>value;
		index = binary_search(arr,value,0,18);
		if(index == -1){
			cout<<"W zbiorze nie ma wartosci " << value;
		}
		else{
			cout<<"Znaleziono wartosc " << value << " Na pozycji o indeksie " << index;
		}
		
	}
}

#include <iostream>

using namespace std;

void selection_sort(int arr[]){
	int min;
	for(int i=0 ; i<4 ; i++){
		min = i;
		for(int j=i+1; j<5 ; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		if(min != 1){
			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
		}
	}
}

int main(){
	int array[5];
	cout << "Enter the array elements" << endl;
	for(int i=0; i<5 ; i++){
		cin >> array[i];
	}
	cout << "UN SORTED ARRAY" << endl;
	for(int i=0; i<5 ; i++){
		cout << array[i] << endl;
	}
	selection_sort(array);
	cout << "Sorted array : " << endl;
	for(int i=0 ; i<5 ; i++){
		cout << array[i] << " " ;
	}
	return 0;
}

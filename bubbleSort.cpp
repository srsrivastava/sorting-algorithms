// Implementing bubble sort 
#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n) {
    

    for(int i = 0; i < n; i++) {
        int swapped = false; 
        for(int j = 0; j < n-i-1; j++) 
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        if(swapped == false ) 
            break;
    }
}

int main() {
	int a[] = {70, 56, 23, 78, 90, 67, 89, 56};
	bubbleSort(a, 8);
	for(int i = 0;i < 8; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
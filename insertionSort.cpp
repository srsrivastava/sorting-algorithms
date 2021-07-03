// Implementing insertion sort
#include <iostream> 
using namespace std;

void insertionSort(int arr[], int n) {
    for(int i = 1; i < n; i++) {
        int j = i-1;
        int key = arr[i];

        while(j >= 0 && arr[j] > key) {

            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main() {
	int a[] = {70, 56, 23, 78, 90, 67, 89, 56};
	insertionSort(a, 8);
	for(int i = 0;i < 8; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
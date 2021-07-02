// Implementing selection sort 
#include <iostream>
using namespace std;

void selectSort(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        int minIdx = i;
        for(int j = i+1; j < n; j++) {
            if(arr[j] < arr[minIdx])
                minIdx = j;
        }

        swap(arr[i], arr[minIdx]);

    }
}

int main() {
	int a[] = {70, 56, 23, 78, 90, 67, 89, 56};
	selectSort(a, 8);
	for(int i = 0;i < 8; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
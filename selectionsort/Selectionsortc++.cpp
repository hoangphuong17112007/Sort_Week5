#include <iostream>
using namespace std;

int main(){
	int A[100], n, i;
	cout << "Nhap vao so phan tu n: ";
	cin >> n;
	for (i=0; i<n; i++){
		cin >> A[i];
	}
	cout << "\n";
	int temp, j, min;
	for (i=0; i<n-1; i++){
		min = i;
		for (j = i+1; j<n; j++){
			if (A[j] < A[min]){
				min = j;
			}
		}
		if (min != i){
			temp = A[i];
			A[i] = A[min];
			A[min] = temp;
		}
	for (j=0; j<n; j++){
		cout << A[j] << " ";
	}
	cout << "\n";
	}
	return 0;
}
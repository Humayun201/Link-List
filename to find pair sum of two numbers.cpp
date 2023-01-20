#include<iostream>
using namespace std;

void pairsum(int arr[],int size,int sum) {
	int i = 0, j = size;
	while (i<j) {
		if (arr[i] + arr[j] == sum) {
			cout << "Pair Sum of indexes " << i << " and " << j << " Equal to sum" << " = " << sum << endl;
			j--;
			i++;
		}
		else
			j--;
	}
}

int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = 10;
	pairsum(arr,10,10);
}
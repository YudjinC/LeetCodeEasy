#include <iostream>

using namespace std;

const int ARR_LENGHT = 5;

void searchTwoSum(int arr[ARR_LENGHT], int target, int &summand1, int &summand2);

int main() {
	int arr[ARR_LENGHT], target, summand1, summand2;

	cout << "Input " << ARR_LENGHT << " arr values:" << endl;
	for (int i = 0; i < ARR_LENGHT; i++) {
		cin >> arr[i];
	}

	cout << "Input target:" << endl;
	cin >> target;

	searchTwoSum(arr, target, summand1, summand2);

	cout << "This indexes: " << summand1 << ", " << summand2 << endl;
	cout << "This value: " << arr[summand1] << ", " << arr[summand2] << endl;
}

void searchTwoSum(int arr[ARR_LENGHT], int target, int& summand1, int& summand2) {
	for (int i = 0; i < ARR_LENGHT - 1; i++) {
		for (int j = i + 1; j < ARR_LENGHT; j ++) {
			if (arr[i] + arr[j] == target) {
				summand1 = i;
				summand2 = j;
				return;
			}
		}
	}
}
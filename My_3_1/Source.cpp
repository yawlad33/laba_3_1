#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	
	int N;
	cout << "Введите размер массива: ";
	cin >> N;	

	int* arr1 = new int[N];
	int count = 0;
	cout << "Заполните массив через пробел: ";
	for (int i = 0; i < N; i++)
	{
		cin >> arr1[i];
		if (arr1[i] >= 0)
			count++;
	}

	cout << endl;
	
	int* arr2 = new int[count];
	int j = 0;
	for (int i = 0; i < N; i++) {
		if (arr1[i] >= 0)
		{
			arr2[j] = arr1[i];
			j++;
		}
	}
	
	delete[] arr1;
	arr1 = arr2;

	cout << "Обновленный массив: ";
	for (int i = 0; i < count; i++) {
		cout << arr1[i] << " ";
	}


	delete [] arr1;
	return 0;
}
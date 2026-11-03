// pp-02_11.cpp: definiuje punkt wejścia dla aplikacji.
//

#include <iostream>
#include <cstdlib>
#include <iomanip>
void zad1();
void zad2();
void zad3();
void zad4();
void zad5();
void zad6();

int main()
{
	std::srand(time(0));


	//zad1();
	//zad2();
	//zad3();
	//zad4();
	//zad5();
	zad6();
	return 0;
}
void zad1() {
	int arr[10] = {};
	for (int i = 0; i < 10; ++i) {
		int n;
		std::cout << "Podaj liczbe " << i + 1  << ": ";
		std::cin >> n;
		arr[i] = n;
	}
	const int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = size - 1; i >= 0; --i) {
		std::cout << arr[i] << " ";
	}
}

void zad2() {
	int size;
	std::cout << "Ile elementow ciągu: ";
	while (!(std::cin >> size) && size < 2) {
		std::cout << "Powyzej 2 elementow: ";
	}
	int* arr = new int[size] {0, 1};
	for (int i = 0; i < size; i++) {
		arr[i + 2] = arr[i] + arr[i + 1];
	}
	for (int i = 0; i < size; ++i) {

		std::cout << arr[i] << " ";
	
	}

}

void zad3() {
	int arr[10] = {};
	for (int i = 0; i < std::size(arr);  ++i) {
		int n = (std::rand() % 99) + 1;

		arr[i] = n;
	}

	double avarage;
	int sum{0};
	for (const auto& el : arr) {
		std::cout << el << " ";

		sum += el;
	}
	std::cout << "\n";
	avarage = static_cast<double>(sum) / static_cast<double>(std::size(arr));
	int larger{ 0 }, smaller{ 0 };
	for (const auto& el : arr) {
		if (el > avarage) {
			++larger;
		}
		if (el < avarage) {
			++smaller;
		}

	}
	int min = arr[0], max = arr[0];
	for (const auto& el : arr) {
		if (el < min) {
			min = el;
		}
		if (el > max){
			max = el;
		}
	}

	std::cout  << "\n\n avarage: " << avarage
		<< "\n smaller: " << smaller << " larger: " << larger
		<< "\n min: " << min << " max: " << max << "\n";
}
void zad4() {
	int arr[10] = {};
	int n;
	std::cout << "Ile elementow: ";
	std::cin >> n;

	if (n < 0 || n > 10) {
		std::cout << "koniec \n";
		return;
	}
	for (int i = 0; i < n; ++i) {
		int input;
		std::cout << "podaj " << i + 1 << ": ";
		std::cin >> input;
		arr[i] = input;
	}
	for (const auto el : arr) {
		std::cout << el << " ";
	}
}

void zad5() {
	int arr[10] = {};

	for (auto& el : arr) {
		el = std::rand() % 10;
	}
	int lucky_num = std::rand() % 10;
	int count{ 0 };
	for (const auto& el : arr) {
		if (lucky_num == el) {
			++count;
		}
		std::cout << el << " ";
	}
	
	std::cout << "\n Lucky: " << lucky_num 
			  <<"\n Count: " << count << "\n";

}

void zad6() {
	const int ROWS = 3, COLS = 3;
	int matrix1[ROWS][COLS] = {
		{1,2,3},
		{3,4,5},
		{6,7,8},
	};

	int matrix2[ROWS][COLS] = {
		{1,2,3},
		{3,4,5},
		{6,7,8},
	};

	int result[ROWS][COLS] = {};

	for (std::size_t i = 0; i < ROWS; ++i) {
		for (std::size_t j = 0; j < COLS; ++j) {
		std::cout << matrix1[i][j] << " ";
		}
		std::cout << "\n";
	}
}
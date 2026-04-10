#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;

//Заповнити масив випадковими числами від 1 до 10
template <typename T>
void randArray(T arr[], int size, int a = 1, int b = 10){
	for (int i = 0; i < size; i++)	{
		arr[i] = rand() % (b - a + 1) + a;
	}
}

//Виведення масиву на екран
template <typename T>
void printArray(T arr[], int size, int w_cout = 5){
	for (int i = 0; i < size; i++)	{
		cout.width(w_cout);
		cout << arr[i];
	}
	cout << endl;
}

//Додавання нового елементу в масив
template <typename T>
void addItemBack(T*& arr, int& size, T value) {
	//1. Створюємо новий масив на +1 ел-т більше
	T* tmp  = new T[size + 1];

	//2.Переносимо дані зі старого масиву в новий
	for (int i  = 0; i < size; i++) {
		tmp[i] = arr[i];
	}
	tmp[size] = value;

	//3. Видаляємо старий масив
	if (arr!= nullptr) delete[] arr;

	//4. Перепривʼязуємо покажчик на нову памʼять
	arr = tmp;
	size++;
}



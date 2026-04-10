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



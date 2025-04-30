#include "vector.hpp"

#include <iostream>

using biv::Vector;

template<typename T>
const std::size_t Vector<T>::START_CAPACITY = 16;

template<typename T>
Vector<T>::Vector() : // инициализация полей класса
	arr(new T[START_CAPACITY]),
	capacity(START_CAPACITY),
	size(0) {
}

template<typename T>
Vector<T>::~Vector() {
	delete[] arr;
	arr = nullptr;
}

template<typename T>
std::size_t Vector<T>::get_size() const noexcept {
	return size;
}

template<typename T>
bool Vector<T>::has_item(const T& value) const noexcept {
	const T* curr = arr;
	const T* const end = arr + size;
	while (curr != end) {
		if (*curr++ == value) return true;
	}
	return false;
}

template<typename T>
bool Vector<T>::insert(const std::size_t position, const T& value) {
	if (position > size) {
		return false;
	}
	
	if (size >= capacity) {
		std::size_t new_capacity = (capacity == 0) ? 1 : capacity * 2;
		T* new_arr = nullptr;
		new_arr = new T[new_capacity];
		for (std::size_t i = 0; i < position; i++) {
			new_arr[i] = arr[i];
		}
		
		new_arr[position] = value;

		for (std::size_t i = position; i < size; i++) {
			new_arr[i + 1] = arr[i];
		}

		delete[] arr;
		arr = new_arr;
		capacity = new_capacity;
	} else {
		for (std::size_t i = size; position < i; --i) {
			arr[i] = arr[i - 1];
		}
		
		arr[position] = value;
	}
	
	size++;
	return true;
}

template<typename T>
void Vector<T>::print() const noexcept {
	const T* curr = arr;
	const T* const end = arr + size;
	while (curr != end) {
		std::cout << *curr++ << " ";
	}
}

template<typename T>
void Vector<T>::push_back(const T& value) {
	if (size >= capacity) {
		std::size_t new_capacity = (capacity == 0) ? 1 : capacity * 2;
		T* new_arr = nullptr;
		new_arr = new T[new_capacity];
		for (std::size_t i = 0; i < size; i++) {
			new_arr[i] = arr[i];
		}
		
		new_arr[size] = value;

		delete[] arr;
		arr = new_arr;
		capacity = new_capacity;
	} else {
		arr[size] = value;
	}
	
	size++;
}

template<typename T>
bool Vector<T>::remove_first(const T& value) {
	std::size_t position = 0;
	while (position < size && arr[position] != value) {
		position++;
	}

	if (position == size) {
		return false;
	}

	for (std::size_t i = position; i < size - 1; i++) {
		arr[i] = arr[i + 1];
	}
	
	size--;
	return true;
}

template class Vector<int>;
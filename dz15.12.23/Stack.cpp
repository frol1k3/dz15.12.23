#include "Stack.h"
#include <iostream>

Stack::Stack() {
	this->head = nullptr;
}

StackNode::StackNode(int data, StackNode* next) {
	this->data = data;
	this->next = next;
};

void Stack::push(int data) {
	StackNode* lastHead = this->head;
	StackNode* newNode = new StackNode(data, lastHead);
	this->head = newNode;
}

bool Stack::isEmpty() {
	return this->head == nullptr;
}

int Stack::pop() {
	if (!this->isEmpty()) {
		int data = this->head->data;
		StackNode* next = this->head->next;
		delete this->head;
		this->head = next;
		return data;
	}
	return -1;
};

int Stack::peek() {
	if (!this->isEmpty()) {
		return -1;
	}
	return this->head->data;
};

int Stack::size() {
	int n = 0;
	StackNode* next = this->head;
	while (next != nullptr) {
		n++;
		next = next->next;
	}
	return n;
};
StackNode* Stack::top() {
	return this->head;
};
void Stack::traverse() {
	StackNode* next = this->head;
	while (next != nullptr) {
		std::cout << next->data << " ";
		next = next->next;
	}
	std::cout << std::endl;
};
void Stack::clear() {
	while (!this->isEmpty())
	{
		StackNode* next = this->head->next;
		delete this->head;
		this->head = next;
	}
};
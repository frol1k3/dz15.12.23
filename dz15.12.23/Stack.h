#pragma once
class StackNode {
public:
	int data;
	StackNode* next;
	StackNode(int data, StackNode* next);
};

class Stack {
public:
	StackNode* head;
	Stack();
	void push(int data);
	int pop();
	int peek();
	bool isEmpty();
	int size();
	StackNode* top();
	void traverse();
	void clear();
};

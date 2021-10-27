#pragma once
template<class T> struct node
{
	T value;
	struct node* next;
};

#ifndef STACK_H
#define STACK_H

template<class T> class Stack
{
public:
	Stack() // Constructor
	{
		this->stack_size = 0;
		this->head = nullptr;
	}
	void push(T val) // Add new element to the stack
	{
		struct node<T>* nNode = new struct node<T>();
		nNode->value = val;
		if (head == nullptr)
		{
			nNode->next = nullptr;
		}
		else
		{
			nNode->next = this->head;
		}
		this->head = nNode;
		this->stack_size++;
	}
	T pop() // Return first element and delete from stack
	{
		if (this->head == nullptr) return '\0';
		struct node<T>* temp = this->head;
		T ret_value = temp->value;
		this->head = this->head->next;
		delete temp;
		this->stack_size--;
		return ret_value;
	}
	T peek() const // Return first element but doesn't delete from stack
	{
		if (this->head == nullptr) return '\0';
		return head->value;
	}
	void clear_stack() // Delete all the elements in the stack
	{
		{
			while (this->head != nullptr)
			{
				struct node<T>* temp = this->head;
				this->head = this->head->next;
				delete temp;
			}
			this->stack_size = 0;
		}
	}
	int size() const // Return number of the elements in the stack
	{
		return this->stack_size;
	}
	~Stack() // Destructor
	{
		while (this->head != nullptr)
		{
			struct node<T>* temp = this->head;
			this->head = this->head->next;
			delete temp;
		}
	}
private:
	struct node<T>* head;
	int stack_size;
};

#endif // !STACK_H



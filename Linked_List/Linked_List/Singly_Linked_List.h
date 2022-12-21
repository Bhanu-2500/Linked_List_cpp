#pragma once
#include <iostream>
#include <cstddef>
#include <iostream>
using namespace std;

class Node {
public:
	int elem;
	Node* next;

	Node() {
		elem = -1;
		next = NULL;
	}
	Node(int e) {
		elem = e;
		next = NULL;
	}
};

class Singly_Linked_List {
private:
	Node* Head;
	Node* Tail;
	int size;

public:
	Singly_Linked_List() {
		Head = NULL;
		Tail = NULL;
		size = 0;
	} 
	void insertFirst( int elem) {
		//create  temp Node
		Node* temp = new Node(elem);
		if (Head == NULL) {//If List is empty!!
			Head = temp;
			Tail= temp;
		}
		else { //Without empty list !!
			temp->next = Head;
			Head = temp;
		}
		size++;
	}
	void insertLast(int elem) {
		Node* temp = new Node(elem);

		if (Head == NULL) {
			Head = temp;
			Tail = temp;
		}
		else {
			Tail->next = temp;
			Tail = temp;
		}

	}
	void insertAt(int pos, int elem) {
		if (pos<0 || pos>size) {
			cout << "Invalid index" << endl;
		}
		else if (pos == 0) {
			insertFirst(elem);
		}
		else if (pos == size) {
			insertLast(elem);
		}
		else {
			Node* temp = new Node(elem);
			Node* current = Head;
			for (int i = 0; i < pos - 1; i++) {
				current = current->next;
			}
			temp->next = current->next;
			current->next = temp;
			size++;
		}
	}
	void print() {
		Node* current = Head;
		for (int i = 0; i < size; i++) {
			cout << current->elem << "->";
			current = current->next;
		}
	}
};